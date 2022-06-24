
/**
 * Write a description of CaesarCipher here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;

public class CaesarCipher {
    public String encrypt(String input, int key) {
        StringBuilder encrypted = new StringBuilder(input);
        String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String shiftedAlphabet = alphabet.substring(key) + alphabet.substring(0, key);
        for(int i = 0; i < encrypted.length(); i++) {
            char currChar = encrypted.charAt(i);
            char newChar = encryptCharacter(alphabet, shiftedAlphabet, currChar);
            encrypted.setCharAt(i, newChar);
            
        }
        return encrypted.toString();
    }
    public char encryptCharacter(String alphabet, String shiftedAlphabet, char currChar) {
        char newChar = ' ';
        int idx = -1;
        if(Character.isLowerCase(currChar)) {
            idx = alphabet.indexOf(Character.toUpperCase(currChar));
            if(idx != -1) {
                newChar = Character.toLowerCase(shiftedAlphabet.charAt(idx));
            }
            else {
                newChar = currChar;
            }
        }
        else {
            idx = alphabet.indexOf(currChar);
            if(idx != -1) {
                newChar = shiftedAlphabet.charAt(idx);
            }
            else {
                newChar = currChar;
            }
        }
        return newChar;
    }
    public String encryptTwoKeys(String input, int key1, int key2) {
        StringBuilder s = new StringBuilder(input);
        String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String shiftedAlphabet1 = alphabet.substring(key1) + alphabet.substring(0, key1);
        String shiftedAlphabet2 = alphabet.substring(key2) + alphabet.substring(0, key2);
        
        for(int i = 0; i < s.length(); i++) {
            char currChar = s.charAt(i);
            char newChar;
            if(i % 2 == 0) {
                newChar = encryptCharacter(alphabet, shiftedAlphabet1, currChar);
            }
            else {
                newChar = encryptCharacter(alphabet, shiftedAlphabet2, currChar);
            }
            s.setCharAt(i, newChar);
        }
        return s.toString();
    }
    public void testCaesar() {
        System.out.println("Single key encryption");
        int key = 17;
        /*
        FileResource fr = new FileResource();
        String message = fr.asString();
        String encrypted = encrypt(message, key);
        System.out.println(encrypted);
        String decrypted = encrypt(encrypted, (26 - key));
        System.out.println(decrypted);
        */
        String encrypted = encrypt("At noon be in the conference room with your hat on for a surprise party. YELL LOUD!", 15);
        System.out.println(encrypted);
        String decrypted = encrypt(encrypted, (26 - 15));
        System.out.println(decrypted);
        
        System.out.println("Double key encryption");
        encrypted = encryptTwoKeys("At noon be in the conference room with your hat on for a surprise party. YELL LOUD!", 8, 21);
        System.out.println(encrypted);
        decrypted = encryptTwoKeys("Top ncmy qkff vi vguv vbg ycpx", (26 - 2), (26 - 20));
        System.out.println(decrypted);
    }
}
