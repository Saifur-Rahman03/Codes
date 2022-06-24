
/**
 * Write a description of TestCiphers here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import java.util.*;

public class TestCiphers {
    public void testTryKeyLength() {
        VigenereBreaker vb = new VigenereBreaker();
        FileResource fr = new FileResource();
        String encrypted = fr.asString();
        int klength = 4;
        char mostCommon = 'e';
        int[] k = new int[klength];
        k = vb.tryKeyLength(encrypted, klength, mostCommon);
        for(int i : k) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
    
    public void testMostCommonChar() {
        VigenereBreaker vb = new VigenereBreaker();
        FileResource fr = new FileResource();
        HashSet<String> dic = new HashSet<String>();
        dic = vb.readDictionary(fr);
        char c = vb.mostCommonCharIn(dic);
        System.out.println(c);
    }
}
