/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage2;

/**
 *
 * @author hp
 */
public class Regex {
    public static void main(String[] args) {
        System.out.println("Java is fun".matches("\\Sava.*"));
        String s = "a+b$#c".replaceAll("[$+#]", "NNN");
        System.out.println(s);
        String[] tokens = "Java,C?C#PHP.Python".split("[#,.?]");
        
        for(int i = 0; i < tokens.length; i++)
            System.out.println(tokens[i] + " ");
        
        char[] dst1 = {'J', 'A', 'V', 'A', '1', '2', '3', '4'};
        "CS6789".getChars(2, 6, dst1, 4);
        
        for(int i = 0; i < dst1.length; i++)
            System.out.print(dst1[i]);
        System.out.println();
        
        String str = String.format("%7.3f%14d%-4s", 3.5, 14, "ab");
        System.out.println(str);
    }
}
