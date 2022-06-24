
/**
 * Write a description of CaesarCipher here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class CaesarCipher {
    private String alphabet;
    private String shiftedAlphabet;
    private int mainKey;
    public CaesarCipher(int key) {
        mainKey = key;
        alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        shiftedAlphabet = alphabet.substring(key) + alphabet.substring(0, key);
    }
    public String encrypt(String input) {
        StringBuilder sb = new StringBuilder(input);
        for(int i = 0; i < sb.length(); i++) {
            char c = sb.charAt(i);
            if(Character.isUpperCase(c)) {
                int idx = alphabet.indexOf(c);
                if(idx != -1) {
                    char newChar = shiftedAlphabet.charAt(idx);
                    sb.setCharAt(i, newChar);
                }
            }
            else {
                c = Character.toUpperCase(c);
                int idx = alphabet.indexOf(c);
                if(idx != -1) {
                    char newChar = Character.toLowerCase(shiftedAlphabet.charAt(idx));
                    sb.setCharAt(i, newChar);
                }
            }
        }
        return sb.toString();
    }
    public String decrypt(String input) {
        CaesarCipher cc = new CaesarCipher(26 - mainKey);
        String decrypted = cc.encrypt(input);
        return decrypted;
    }
}
