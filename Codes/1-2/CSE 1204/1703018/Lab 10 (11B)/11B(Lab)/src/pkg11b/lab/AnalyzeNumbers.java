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

public class AnalyzeNumbers {
    public static void main(String[] args){
        java.util.Scanner input = new java.util.Scanner(System.in);
        System.out.print("Enter the number of items: ");
        int n = input.nextInt();
        double[] num = new double[n];
        double sum = 0;
        
        for(int i = 0; i < n; i++){
            num[i] = input.nextDouble();
            sum += num[i];
        }
        double avg = sum / n;
        
        int count = 0;
        for(int i = 0; i < n; i++)
            if(num[i] > avg)
                count++;
        System.out.println("Average is " + avg);
        System.out.println("No of elements above the average is " + count);
    }
}
