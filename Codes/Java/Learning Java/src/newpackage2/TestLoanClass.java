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
import java.util.Scanner;

public class TestLoanClass {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter annual interest rate: " );
        double annualInterestRate = input.nextDouble();
        System.out.print("Enter number of Years: ");
        int numberOfYears = input.nextInt();
        System.out.print("Enter Loan Amount: ");
        double loanAmount = input.nextDouble();
        
        Loan loan1 = new Loan();
        Loan loan2 = new Loan(annualInterestRate, numberOfYears, loanAmount);
        
        System.out.printf("The loan was created on %s\n" + "The monthly payment "
                + "is %.2f\nTht total payment is %.2f\n" , loan1.getloanDate().toString(),
                loan1.getMonthlyPayment(), loan1.getTotalPayment());
        System.out.printf("\nThe loan was created on %s\n" + "The monthly payment "
                + "is %.2f\nTht total payment is %.2f\n" , loan2.getloanDate().toString(),
                loan2.getMonthlyPayment(), loan2.getTotalPayment());
    }
}
