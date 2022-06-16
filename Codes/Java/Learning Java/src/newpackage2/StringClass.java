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
public class StringClass {
    public static void main(String[] args) {
        String s = "JAVA";
        s = "HTML"; //String are immutable but it's reference can be changed
        System.out.println(s);
        
        String s1 = "Welcome";
        String s2 = new String("Welcome");
        String s3 = "Welcome";
        System.out.println(s1 == s2); //same contents but different objects
        System.out.println(s1 == s3);
    }
}
