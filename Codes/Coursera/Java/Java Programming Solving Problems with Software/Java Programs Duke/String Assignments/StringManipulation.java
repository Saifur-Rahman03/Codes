
/**
 * Write a description of StringManipulation here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class StringManipulation {
    public boolean twoOccurrences(String stringa, String stringb) {
        int a = stringa.length();
        int b = stringb.length();
        int count = 0;
        int i = 0;
        while(true) {
            int index = stringb.indexOf(stringa, i);
            if(index != -1) {
                count++;
                i += index + 1; //i += index + a;
            }
            else {
                break;
            }
            
        }
        if(count >= 2) {
            return true;
        }
        return false;
      
     
    }
    public String lastPart(String stringa, String stringb) {
        int a = stringa.length();
        int b = stringb.length();
        int i = stringb.indexOf(stringa);
        if(i == -1) {
            return stringb;
        }
        else {
            String str = stringb.substring(i + a); //(i + a, b);
            return str;
        }
    }
    public void testing() {
        String s1 = "by";
        String s2 = "A story by Abby Long";
        boolean result = twoOccurrences(s1, s2);
        System.out.println(s1 + " - " + s2 + " - " + result);
        s1 = "atg";
        s2 = "ctgtatgta";
        result = twoOccurrences(s1, s2);
        System.out.println(s1 + " - " + s2 + " - " + result);
        s1 = "a";
        s2 = "banana";
        result = twoOccurrences(s1, s2);
        System.out.println(s1 + " - " + s2 + " - " + result);
        s1 = "an";
        s2 = "banana";
        String str = lastPart(s1, s2);
        System.out.println(s1 + " - " + s2 + " - " + str);
        s1 = "zoo";
        s2 = "forest";
        str = lastPart(s1, s2);
        System.out.println(s1 + " - " + s2 + " - " + str);
    }
}
