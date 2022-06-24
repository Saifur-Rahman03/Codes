
/**
 * Write a description of TestCaesarCipher here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
public class TestCaesarCipher {
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
    public String breakCaesarCipher(String input) {
        String decrypted = "";
        int freq = 4;
        int[] freqs = countLetters(input);
        int maxDex = maxIndex(freqs);
        int dkey = maxDex - freq;
        if(maxDex < freq) {
            dkey = 26 - (freq - maxDex);
        }
        CaesarCipher cc = new CaesarCipher(dkey);
        decrypted = cc.decrypt(input);
        return decrypted;
    }
    public void simpleTests() {
        FileResource fr = new FileResource();
        String input = fr.asString();
        CaesarCipher cc = new CaesarCipher(15);
        String encrypted = cc.encrypt(input);
        String decrypted = cc.decrypt(encrypted);
        System.out.println("encrypted message: " + encrypted);
        System.out.println("decrypted message: " + decrypted);
        decrypted = breakCaesarCipher(encrypted);
        System.out.println("broken decrypted message: " + decrypted);
    }
    
}
