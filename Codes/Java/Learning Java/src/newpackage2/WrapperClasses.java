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
public class WrapperClasses {
    public static void main(String[] args) {
        System.out.println("Max integer: " + Integer.MAX_VALUE);
        System.out.println("Max float: " + Float.MAX_VALUE);
        System.out.println("Max double: " + Double.MAX_VALUE);
        
        long n = new Double(12.4).longValue();
        System.out.println(n);
        
        int r = new Double(12.4).compareTo(new Double(12.3));
        System.out.println(r);
        
        String s = "11111";
        Integer i = Integer.valueOf("147");
        System.out.println(i);
        
         
        System.out.println(Integer.parseInt(s, 2));
        
        
             
    }
}
