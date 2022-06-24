
/**
 * Write a description of WordFrequenciesMap here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
import edu.duke.*;

public class WordFrequenciesMap {
    public void countTotalWords(FileResource fr) {
        int total = 0;
        for(String w : fr.words()) {
            w = w.toLowerCase();
            total++;
        }
        System.out.println("total = " + total);
    }
    public void countWords(FileResource fr) {
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        for(String w : fr.words()) {
            w = w.toLowerCase();
            if(map.keySet().contains(w)) {
                map.put(w, map.get(w) + 1);
            }
            else {
                map.put(w, 1);
            }
        }
        for(String w : map.keySet()) {
            int occurences = map.get(w);
            if(occurences > 300) {
                System.out.println(occurences + "\t" + w);
            }
        }
        System.out.println("total unique words = " + map.size());
    }
    public void testCountWords() {
        FileResource fr = new FileResource();
        countTotalWords(fr);
        countWords(fr);
    }
}
