
/**
 * Write a description of CharactersInPlay here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
import edu.duke.*;

public class CharactersInPlay {
    private ArrayList<String> charNames;
    private ArrayList<Integer> charCounts;
    
    public CharactersInPlay() {
        charNames = new ArrayList<String>();
        charCounts = new ArrayList<Integer>();        
    }
    
    public void update(String person) {
        int idx = charNames.indexOf(person);
        if(idx == -1) {
            charNames.add(person);
            charCounts.add(1);
        }
        else {
            int val = charCounts.get(idx);
            charCounts.set(idx, val + 1);
        }
    }
    public void findAllCharacters() {
        FileResource resource = new FileResource();
        for(String s: resource.lines()) {
            int i = s.indexOf('.');
            if(i != -1) {
                String person = s.substring(0, i);
                update(person);
            }
        }
    }
    public void charactersWithNumParts(int num1, int num2) {
        for(int i = 0; i < charNames.size(); i++) {
            String name = charNames.get(i);
            if(name.length() >= num1 && name.length() <= num2) {
                System.out.println(charNames.get(i) + " " + charCounts.get(i));
            }
        }
    }
    public int findIndexOfMax() {
        int maxIndex = -1;
        int maxFreq = -1;
        for(int i = 0; i < charCounts.size(); i++) {
            int freq = charCounts.get(i);
            if(freq > maxFreq) {
                maxFreq = freq;
                maxIndex = i;
            }
        }
        return maxIndex;
    }
    public void findFreq(int num1, int num2) {
        for(int i = 0; i < charCounts.size(); i++) {
            int freq = charCounts.get(i);
            if(freq >= num1 && freq <= num2) {
                System.out.println(charNames.get(i) + " " + charCounts.get(i));
            }
        }
    }
    public void tester() {
        findAllCharacters();
        for(int i = 0; i < charNames.size(); i++) {
            //System.out.println(charNames.get(i) + " " + charCounts.get(i));
        }
        System.out.println("characters with num parts");
        //charactersWithNumParts(10, 15);
        int maxIndex = findIndexOfMax();
        System.out.println("The word that occurs most often and its count are: "
                            + charNames.get(maxIndex) + "\t" + 
                                charCounts.get(maxIndex));
        findFreq(10, 100);
    }
}
