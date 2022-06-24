
/**
 * Write a description of WordPlay here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class WordPlay {
    public boolean isVowel(char ch) {
        char c = Character.toLowerCase(ch);
        if(c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u') {
            return true;
        }
        else {
            return false;
        }
    }
    public void testIsVowel() {
        System.out.println(isVowel('f'));
        System.out.println(isVowel('I'));
    }
    public String replaceVowels(String phrase, char ch) {
        StringBuilder s = new StringBuilder(phrase);
        for(int i = 0; i < s.length(); i++) {
            if(isVowel(s.charAt(i))) {
                s.setCharAt(i, ch);
            }
        }
        return s.toString();
    }
    public void testReplaceVowels() {
        String replaced = replaceVowels("HELLO World", '*');
        System.out.println(replaced);
    }
    public String emphasize(String phrase, char ch) {
        StringBuilder s = new StringBuilder(phrase);
        ch = Character.toLowerCase(ch);
        for(int i = 0; i < s.length(); i++) {
            if(Character.toLowerCase(s.charAt(i)) == ch) {
                if(i % 2 == 0) {
                    s.setCharAt(i, '*');
                }
                else {
                    s.setCharAt(i, '+');
                }
            }
        }
        return s.toString();
    }
    public void testEmphasize() {
        String emp = emphasize("dna ctgaaactga", 'a');
        System.out.println(emp);
        emp = emphasize("Mary Bella Abracadabra", 'a');
        System.out.println(emp);
    }
}
