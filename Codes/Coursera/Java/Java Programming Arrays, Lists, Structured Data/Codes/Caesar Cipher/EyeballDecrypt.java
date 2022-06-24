
/**
 * Write a description of EyeballDecrypt here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class EyeballDecrypt {
    public void eyeballDecrypt(String encrypted) {
        CaesarCipher cipher = new CaesarCipher();
        for(int k = 0; k < 26; k++) {
            String s = cipher.encrypt(encrypted, k);
            System.out.println(k + "\t" + s);
        }
    }
    public void testEyeballDecrypt() {
        eyeballDecrypt("Lujyfwapvu huk zljbypaf hyl mbukhthluahs whyaz vm avkhf'z Pualyula");
    }
}
