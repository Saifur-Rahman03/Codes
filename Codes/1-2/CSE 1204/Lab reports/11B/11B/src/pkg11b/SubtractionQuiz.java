/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg11b;

import java.util.Scanner;

public class SubtractionQuiz {
    public static void main(String[] args){
        int n1 = (int)(Math.random() * 10);
        int n2 = (int)(Math.random() * 10);
        if (n1 < n2) {
            int temp = n1;
            n1 = n2;
            n2 = temp;
              }
        System.out.print("What is " + n1 + " - " + n2 + "? ");
        Scanner input = new Scanner(System.in);
        int answer = input.nextInt();
        if (n1 - n2 == answer)
            System.out.println("You are correct!");
        else {
            System.out.println("Your answer is wrong.");
            System.out.println(n1 + " - " + n2 +
            " should be " + (n1 - n2));
        }
    }
}