
/**
 * Write a description of CaesarBreaker here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class CaesarBreaker {
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
    public void testDecrypt() {
        String encrypted = "Pi cddc qt xc iwt rdcutgtcrt gddb lxiw ndjg wpi dc udg p hjgegxht epgin. NTAA ADJS!";
        String decrypted = decrypt(encrypted);
        System.out.println(decrypted);
    }
}
