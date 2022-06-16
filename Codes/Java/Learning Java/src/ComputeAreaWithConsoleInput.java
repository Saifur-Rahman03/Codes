/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hp
 */
import java.util.Scanner;

public class ComputeAreaWithConsoleInput {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter radius: ");
        double radius = input.nextDouble();
        double area = 3.14159 * radius * radius;
        System.out.println("Area: " + area);
    }
}
