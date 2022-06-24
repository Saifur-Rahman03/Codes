
/**
 * Write a description of CaesarCipherTwo here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class CaesarCipherTwo {
    private String alphabet;
    private String shiftedAlphabet1;
    private String shiftedAlphabet2;
    private int mainKey1;
    private int mainKey2;
    public CaesarCipherTwo(int key1, int key2) {
        mainKey1 = key1;
        mainKey2 = key2;
        alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        shiftedAlphabet1 = alphabet.substring(key1) + alphabet.substring(0, key1);
        shiftedAlphabet2 = alphabet.substring(key2) + alphabet.substring(0, key2);
    }
    public char encryptCharacter(String shiftedAlphabet, char c) {
        char newChar = ' ';
        if(Character.isUpperCase(c)) {
            int idx = alphabet.indexOf(c);
            if(idx != -1) {
                newChar = shiftedAlphabet.charAt(idx);
                return newChar;
            }
            else {
                newChar = c;
            }
        }
        else {
            c = Character.toUpperCase(c);
            int idx = alphabet.indexOf(c);
            if(idx != -1) {
                newChar = Character.toLowerCase(shiftedAlphabet.charAt(idx));
                return newChar;
            }
            else {
                newChar = c;
            }
        }
        return newChar;
    }
    public String encrypt(String input) {
        StringBuilder sb = new StringBuilder(input);
        for(int i = 0; i < sb.length(); i++) {
            char c = sb.charAt(i);
            char newChar;
            if(i % 2 == 0) {
                newChar = encryptCharacter(shiftedAlphabet1, c);
            }
            else {
                newChar = encryptCharacter(shiftedAlphabet2, c);
            }
            sb.setCharAt(i, newChar);
        }
        return sb.toString();
    }
    public String decrypt(String input) {
        CaesarCipherTwo cc = new CaesarCipherTwo(26 - mainKey1, 26 - mainKey2);
        String decrypted = cc.encrypt(input);
        return decrypted;
    }
}
