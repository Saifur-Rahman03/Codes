
/**
 * Write a description of EfficientMarkovModel here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;

public class EfficientMarkovModel extends AbstractMarkovModel {
    private int n;
    HashMap<String, ArrayList<String>> map;
    
    public EfficientMarkovModel(int number) {
        n = number;
        map = new HashMap<String, ArrayList<String>>();
        myRandom = new Random();
    }
    
    public void setRandom(int seed){
        myRandom = new Random(seed);
    }
    
    public void setTraining(String s){
        myText = s.trim();
    }
    
    public void buildMap(int numChars) {
        int index = myRandom.nextInt(myText.length() - n);
        String key = myText.substring(index, index + n);
        index = myText.indexOf(key);
        ArrayList<String> value = new ArrayList<String>();
        int pos = 0;
        for(int k=0; k < numChars - n; k++){
            while(pos < myText.length()) {
                int i = myText.indexOf(key, pos);
                if(index != -1 && index+key.length() < myText.length() - 1) {
                    char c = myText.charAt(index+key.length());
                    value.add(Character.toString(c));
                    pos = index + key.length();
                }
                else {
                    break;
                }
            }
            map.put(key, value);
            if(value.size() == 0) {
                break;
            }
            index = myRandom.nextInt(value.size());
            String next = value.get(index);
            key = key.substring(1) + next;
        }
    }
    
    
    public String getRandomText(int numChars){
        StringBuffer sb = new StringBuffer();
        int index = myRandom.nextInt(myText.length() - n);
        String key = myText.substring(index, index + n);
        sb.append(key);
        for(int k=0; k < numChars - n; k++){
            ArrayList<String> follows = map.get(key);
            if(follows.size() == 0) {
                break;
            }
            index = myRandom.nextInt(follows.size());
            String next = follows.get(index);
            sb.append(next);
            key = key.substring(1) + next;
        }
        return sb.toString();
    }
    
    public void printHashMapInfo() {
        for(String s: map.keySet()) {
            System.out.print("key: " + s + " \n");
            ArrayList<String> str = map.get(s);
            for(String stri: str) {
                System.out.print(stri + " ");
            }
            System.out.println("   ends");
        }
        System.out.println("\nsize: " + map.size());
    }
    
    public String toString() {
        return "EfficientMarkovModel of order " + n;
    }
}
