/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12b;

import java.util.Scanner;

public class Arrat {
    public static void main (String[] args)  
    {           
        Scanner input = new Scanner(System.in);
        int[] arr = new int[5]; 
        System.out.println("Enter array elements: ");
        for(int i = 0; i < arr.length; i++){
            arr[i] = input.nextInt();
        }
      for (int i = 0; i < arr.length; i++) 
         System.out.println("Element at index " + i +  
                                      " : "+ arr[i]);           
    } 
}
