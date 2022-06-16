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

public class computeLoan {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter annual interest rate: ");
        double ar = input.nextDouble();
        double mr = ar / 1200;
        System.out.print("Enter no. of years: ");
        int y = input.nextInt();
        System.out.print("Enter loan amount: ");
        double l = input.nextDouble();
        
        double mp = l * mr/(1 - 1 / Math.pow(1 + mr, y * 12));
        double tp = mp * y * 12;
        System.out.println("Monthly payment: " + (int) mp);
        System.out.println("Total payment: " + (int) tp);
    }
}
