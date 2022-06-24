
/**
 * Write a description of WordFrequencies here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import java.util.*;

public class WordFrequencies {
    private ArrayList<String> myWords;
    private ArrayList<Integer> myFreqs;
    
    public WordFrequencies() {
        myWords = new ArrayList<String>();
        myFreqs = new ArrayList<Integer>();
    }
    public void findUnique() {
        myWords.clear();
        myFreqs.clear();
        FileResource fr = new FileResource();
        
        for(String s: fr.words()) {
            s = s.toLowerCase();
            int index = myWords.indexOf(s);
            if(index == -1) {
                myWords.add(s);
                myFreqs.add(1);
            }
            else {
                int val = myFreqs.get(index);
                myFreqs.set(index, val + 1);
            }
        }
    }
    public int findIndexOfMax() {
        int maxIndex = -1;
        int maxFreq = -1;
        for(int i = 0; i < myFreqs.size(); i++) {
            int freq = myFreqs.get(i);
            if(freq > maxFreq) {
                maxFreq = freq;
                maxIndex = i;
            }
        }
        return maxIndex;
    }
    public void tester() {
        findUnique();
        
        for(int k = 0; k < myWords.size(); k++) {
            System.out.println(myFreqs.get(k) + "\t" + myWords.get(k));     
        }
        int maxIndex = findIndexOfMax();
        System.out.println("The word that occurs most often and its count are: "
                            + myWords.get(maxIndex) + "\t" + 
                                myFreqs.get(maxIndex));
        System.out.println("#unique words: " + myWords.size());
    }
}
