
/**
 * Write a description of Tester here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
import edu.duke.*;

public class Tester {
    public void testGetFollows() {
        MarkovOne markov = new MarkovOne();
        markov.setTraining("this is a test yes this is a test");
        ArrayList<String> str = markov.getFollows("th");
        for(String s: str) {
            System.out.println(s);
        }
    }
    
    public void testGetFollowsWithFile() {
        FileResource fr = new FileResource();
        String st = fr.asString();
        MarkovOne markov = new MarkovOne();
        markov.setTraining(st);
        ArrayList<String> str = markov.getFollows("th");
        for(String s: str) {
            System.out.println(s);
        }
        System.out.println("size: " + str.size());
    }
}
