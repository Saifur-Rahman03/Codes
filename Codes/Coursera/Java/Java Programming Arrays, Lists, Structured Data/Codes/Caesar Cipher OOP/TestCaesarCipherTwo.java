
/**
 * Write a description of TestCaesarCipherTwo here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;

public class TestCaesarCipherTwo {
    private String halfOfString(String message, int start) {
        StringBuilder s = new StringBuilder();
        for(int i = start; i < message.length(); i+=2) {
            s.append(message.charAt(i));
        }
        return s.toString();
    }
    private int[] countLetters(String message) {
        String alph = "abcdefghijklmnopqrstuvwxyz";
        int[] counts = new int[26];
        for(int i = 0; i < message.length(); i++) {
            char ch = Character.toLowerCase(message.charAt(i));
            int dex = alph.indexOf(ch);
            if(dex != -1) {
                counts[dex]++; 
            }
        }
        return counts;
    }
    private int maxIndex(int[] counts) {
        int maxIndex = 0;
        for(int i = 0; i < counts.length; i++) {
            if(counts[i] > counts[maxIndex]) {
                maxIndex = i;
            }
        }
        return maxIndex;
    }
    private int getKey(String s) {
        int[] freqs = countLetters(s);
        int maxDex = maxIndex(freqs);
        int freq = 4; //position of e
        int dkey = maxDex - freq;
        if(maxDex < freq) {
            dkey = 26 - (freq - maxDex);
        }
        return dkey;
    }
    public String breakCaesarCipher(String input) {
        String decrypted = "";
        String s1 = halfOfString(input, 0);
        String s2 = halfOfString(input, 1);
        int key1 = getKey(s1);
        int key2 = getKey(s2);
        System.out.println(key1 + " " + key2);
        CaesarCipherTwo cc = new CaesarCipherTwo(key1, key2);
        decrypted = cc.decrypt(input);
        return decrypted;
    }
    public void simpleTests() {
        
        FileResource fr = new FileResource();
        String encrypted = fr.asString();
        //CaesarCipherTwo cc = new CaesarCipherTwo(21, 8);
        //String encrypted = cc.encrypt(input);
        //String decrypted = cc.decrypt(encrypted);
        //System.out.println("encrypted message: " + encrypted);
        //System.out.println("decrypted message: " + decrypted);
        String decrypted = breakCaesarCipher(encrypted);
        System.out.println("broken decrypted message:\n " + decrypted);
        /*
        
        String encrypted = "Aal uttx hm aal Qtct Fhljha pl Wbdl. Pvxvxlx!";
        int key1 = 14;
        int key2 = 24;
        CaesarCipherTwo cc = new CaesarCipherTwo(key1, key2);
        String decrypted = breakCaesarCipher(encrypted);
        System.out.println(decrypted);
        */
    }
}
