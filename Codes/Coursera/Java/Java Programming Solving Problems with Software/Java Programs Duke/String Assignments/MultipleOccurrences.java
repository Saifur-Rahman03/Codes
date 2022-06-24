
/**
 * Write a description of MultipleOccurrences here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class MultipleOccurrences {
    public int howMany(String stra, String strb) {
        int lena = stra.length();
        int lenb = stra.length();
        int count = 0;
        int startIndex = 0;
        while(true) {
            int i = strb.indexOf(stra, startIndex);
            if(i == -1) {
                break;
            }
            else {
                count++;
                startIndex = lena + i;
            }
        }
        return count;
    }
    public void testHowMany() {
        int r;
        String s1;
        String s2;
        s1 = "GAA";
        s2 = "ATGAACGAATTGAATC";
        r = howMany(s1, s2);
        System.out.println(s1 + " - " + s2 + " - " + r);
        s1 = "AA";
        s2 = "ATAAAA";
        r = howMany(s1, s2);
        System.out.println(s1 + " - " + s2 + " - " + r);
    }
    
}
