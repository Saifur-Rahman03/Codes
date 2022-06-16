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

public class guessNoOneTime {
    public static void main(String[] args){
        int n = (int)(Math.random() * 101);
        Scanner input = new Scanner(System.in);
        System.out.println("Guess a magic number between 0 to 100");
        while(true){
            System.out.print("Enter the number: ");
            int g = input.nextInt();
            if(g == n){
                System.out.println("Yes, The number is " + n);
                break;
            }
            else if(g > n)
                System.out.println("The guess is too high");
            else if(g < n)
                System.out.println("The guess is too low");
        }
    }
}
