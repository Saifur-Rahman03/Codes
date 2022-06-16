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
import java.math.*;
public class BigIntegerLargeFactorial {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter an integer: ");
        int n = input.nextInt();
        System.out.println("Factorial of " + n + " is " + factorial(n));
        
    }
    public static BigInteger factorial(int n) {
        BigInteger r = BigInteger.ONE;
        for (int i = 1; i <= n; i++) {
            r = r.multiply(new BigInteger(i + ""));
        }
        return r;
    }
}
