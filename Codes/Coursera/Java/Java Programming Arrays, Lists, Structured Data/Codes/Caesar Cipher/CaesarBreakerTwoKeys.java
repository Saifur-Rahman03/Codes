
/**
 * Write a description of CaesarBreakerTwoKeys here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
public class CaesarBreakerTwoKeys {
    public int[] countLetters(String message) {
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
    public int maxIndex(int[] counts) {
        int maxIndex = 0;
        for(int i = 0; i < counts.length; i++) {
            if(counts[i] > counts[maxIndex]) {
                maxIndex = i;
            }
        }
        return maxIndex;
    }
    public String decrypt(String encrypted) {
        CaesarCipher cc = new CaesarCipher();
        int freq = 14;
        int[] freqs = countLetters(encrypted);
        int maxDex = maxIndex(freqs);
        int dkey = maxDex - freq;
        if(maxDex < freq) {
            dkey = 26 - (freq - maxDex);
        }
        return cc.encrypt(encrypted, 26 - dkey);
    }
    public String halfOfString(String message, int start) {
        StringBuilder s = new StringBuilder();
        for(int i = start; i < message.length(); i+=2) {
            s.append(message.charAt(i));
        }
        return s.toString();
    }
    public int getKey(String s) {
        int[] freqs = countLetters(s);
        int maxDex = maxIndex(freqs);
        int freq = 4; //position of e
        int dkey = maxDex - freq;
        if(maxDex < freq) {
            dkey = 26 - (freq - maxDex);
        }
        return dkey;
    }
    public String decryptTwoKeys(String encrypted) {
        CaesarCipher cc = new CaesarCipher();
        String s1 = halfOfString(encrypted, 0);
        System.out.println(s1);
        String s2 = halfOfString(encrypted, 1);
        System.out.println(s2);
        int key1 = getKey(s1);
        int key2 = getKey(s2);
        System.out.println(key1 + " " + key2);
        String decrypted = cc.encryptTwoKeys(encrypted, 26 - key1, 26 - key2);
        return decrypted;
    }
    public void testDecrypt() {
        String encrypted = "Qbkm Zgis";
        String decrypted = decrypt(encrypted);
        System.out.println(decrypted);      
    }
    public void testDecryptTwoKeys() {
        //String encrypted = "Gwpv c vbuq pvokki yfve iqqu qc bgbgbgbgbgbgbgbgbu";
        //String encrypted = "Akag tjw Xibhr awoa aoee xakex znxag xwko";
        FileResource fr = new FileResource();
        String encrypted = fr.asString();
        System.out.println(encrypted);
        String decrypted = decryptTwoKeys(encrypted);
        System.out.println(decrypted);
    }
}
