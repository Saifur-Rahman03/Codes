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

public class computeAverage {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter threer numbers:");
        double n1 = input.nextDouble();
        double n2 = input.nextDouble();
        double n3 = input.nextDouble();
        
        double avg = (n1 + n2 + n3) / 3;
        
        System.out.println("The average of " + n1 + " " + n2 + " " + n3 + " is " + avg);
    }
}
