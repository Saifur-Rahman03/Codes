/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg11b.lab;

/**
 *
 * @author user
 */
import java.util.Scanner;
public class TotalSum {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter two number: ");
        int n1 = input.nextInt();
        int n2 = input.nextInt();
        System.out.println("The sum from " + n1 + " and " + n2 + " is " + sum(n1, n2));
    }

public static int sum(int i1, int i2){
    int s = 0;
    for(int i = i1; i <= i2; i++)
        s += i;
    return s;
    }
}