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
public class StringManipulation {
    public static void main(String[] args) {
        String s1 = "JAva#Script#fuvk";
        String[] tokens = s1.split("#");
        for(int i = 0; i < tokens.length; i++)
            System.out.println(tokens[i] + " ");
    }
}
