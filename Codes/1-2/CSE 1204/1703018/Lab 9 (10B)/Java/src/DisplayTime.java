/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user
 */
import java.util.Scanner;

public class DisplayTime {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter time in seconds: ");
        int s = input.nextInt();
        int m = s / 60;
        int rs = s % 60;
        System.out.println(s + " seconds is " + m + " minutes " + rs + " seconds");
    }
}
