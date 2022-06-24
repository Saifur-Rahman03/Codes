
/**
 * Write a description of FindABC here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class FindABC {
    public void findAbc(String input) {
    int index = input.indexOf("abc");
    while (true) {
        if (index == -1) {
            break;
        }
        //System.out.println("before: " + index);
        String found = input.substring(index+1, index+4);
        System.out.println(found);
        index = input.indexOf("abc", index+3);
        System.out.println("after: " + (index+4));
        //System.out.println((index+1) + " " + (index+4));
        if(index > input.length() - 3){
            break;
        }
    }   
}
   public void test() {
    //no code yet
    //findAbc("abcd");
    //findAbc("abcdabc");
    //       0123456789012345678901234567890123456789
    //findAbc("abcdkfjsksioehgjfhsdjfhksdfhuwabcabcajfieowj");
    findAbc("abcabcabcabca");
}
}
