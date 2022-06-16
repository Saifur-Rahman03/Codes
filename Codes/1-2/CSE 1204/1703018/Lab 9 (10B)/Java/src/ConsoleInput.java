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

public class ConsoleInput {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter radius: ");
        double r = input.nextDouble();
        double A = 3.1416 * r * r;
        System.out.println("Radius: " + r + " Area = " + A);
    }
}
