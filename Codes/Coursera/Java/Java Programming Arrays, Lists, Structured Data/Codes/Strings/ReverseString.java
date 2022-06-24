
/**
 * Write a description of ReverseString here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class ReverseString {
    public String reverseString(String s) {
        String rev = "";
        for(int i = 0; i < s.length(); i++) {
            rev = s.charAt(i) + rev;
        }
        return rev;
    }
    public void testReverseString() {
        String s = "I Love You";
        String rev = reverseString(s);
        System.out.println(rev);
    }
}
