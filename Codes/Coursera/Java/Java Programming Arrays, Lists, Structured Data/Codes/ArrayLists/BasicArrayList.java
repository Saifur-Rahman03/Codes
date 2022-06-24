
/**
 * Write a description of BasicArrayList here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;

public class BasicArrayList {
    public void processingArrayList() {
        ArrayList<String> words = new ArrayList<String>();
        words.add("Hello");
        words.add("World");
        String s = words.get(1);
        words.set(0, "goodbye");
        System.out.println(words.get(0) + s);
    }
    public void processingArray() {
        String[] sArr = new String[3];
        sArr[0] = "Hello";
        sArr[1] = "World";
        System.out.println(sArr[0] + sArr[1]);
    }
    public void test() {
        processingArrayList();
        processingArray();
    }
}   
