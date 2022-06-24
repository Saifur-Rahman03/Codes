
/**
 * Write a description of WordLengths here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;

public class WordLengths {
    public void countWordLengths(FileResource resource, int[] counts) {
        //String txt = resource.asString();
        for(String word : resource.words()) {
            int length = word.length();
            char start = word.charAt(0);
            char end = word.charAt(length - 1);
            if(!Character.isLetter(start)) {
                length--;
            }
            if(!Character.isLetter(end)) {
                length--;
            }
            if(length >= 0 ) {
                counts[length]++;
            }
            
        }
    }
    public int indexOfMax(int[] values) {
        int highest = -1;
        int indexOfHighest = -1;
        for(int i = 0; i < values.length; i++) {
            if(values[i] > highest) {
                highest = values[i];
                indexOfHighest = i;
            }
        }
        return indexOfHighest;
    }
    public void testCountWordLengths() {
        FileResource fr = new FileResource();
        int count = 0;
        for(String word : fr.words()) {
            count++;
        }
        //System.out.println(count);
        int[] values = new int[count + 1];
        countWordLengths(fr, values);
        for(int k = 0; k < values.length; k++) {
            if(values[k] == 0) {
                continue;
            }
            System.out.println("length: " + k + " no of words: " + values[k]);
        }
        int idx = indexOfMax(values);
        System.out.println("most common length is: " + idx);
    }
}
