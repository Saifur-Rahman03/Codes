/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg11b;

import java.util.Scanner;

public class Grade {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter obtained marks: ");
        double m = input.nextDouble();
        if(m > 100 || m < 0)
            System.out.println("Invalid marks");
        else if (m >= 90.0)
            System.out.println("A");
        else if (m >= 80.0)
            System.out.println("B");
        else if (m >= 70.0)
            System.out.println("C");
        else if (m >= 60.0)
            System.out.println("D");
        else
            System.out.println("F");
    }
}
