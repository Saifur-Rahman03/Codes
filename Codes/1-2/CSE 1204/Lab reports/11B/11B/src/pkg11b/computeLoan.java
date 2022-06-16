/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg11b;

import java.util.Scanner;

public class computeLoan {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter annual interest rate: ");
        double air = input.nextDouble();
        double mir = air / 1200;
        System.out.print("Enter number of years as an integer: ");
        int y = input.nextInt();
        System.out.print("Enter loan amount: ");
        double loanAmount = input.nextDouble();
        double mPayment = loanAmount * mir / (1- 1 / Math.pow(1 + mir, y * 12));
        double tp = mPayment * y * 12;
        System.out.println("The monthly payment is $" +
        (int)(mPayment * 100) / 100.0);
        System.out.println("The total payment is $" +
        (int)(tp * 100) / 100.0);
    }
}
