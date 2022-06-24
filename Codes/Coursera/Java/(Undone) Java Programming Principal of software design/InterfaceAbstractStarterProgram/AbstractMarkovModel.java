
/**
 * Abstract class AbstractMarkovModel - write a description of the class here
 * 
 * @author (your name here)
 * @version (version number or date here)
 */

import java.util.*;

public abstract class AbstractMarkovModel implements IMarkovModel {
    protected String myText;
    protected Random myRandom;
    
    public AbstractMarkovModel() {
        myRandom = new Random();
    }
    
    public void setTraining(String s) {
        myText = s.trim();
    }
    
    protected ArrayList<String> getFollows(String key) {
        ArrayList<String> follows = new ArrayList<String>();
        int pos = 0;
        while(pos < myText.length()) {
            int index = myText.indexOf(key, pos);
            if(index != -1 && index+key.length() < myText.length() - 1) {
                char c = myText.charAt(index+key.length());
                follows.add(Character.toString(c));
                pos = index + key.length();
            }
            else {
                break;
            }
        }
        return follows;
    }

    
    abstract public String getRandomText(int numChars);

}
