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
public class BMI {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter weight in kgs: ");
        double w = input.nextDouble();
        System.out.print("Enter height in inches: ");
        double h = input.nextDouble();
        final double mpi = 0.0254;
        double hm = h * mpi;
        double bmi = w / (hm * hm);
        System.out.println("BMI is " + bmi);
        if(bmi < 18.5)
            System.out.println("Underweight");
        else if(bmi < 25)
            System.out.println("Normal");
        else if(bmi < 30)
            System.out.println("Overweight");
        else
            System.out.println("Obese");
    }
}
