/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12b;

public class foreachLoop { 
    public static void main(String[] arg) {  
            int[] marks = { 125, 132, 95, 116, 110 }; 
              
            int highest_marks = maximum(marks); 
            System.out.println("The highest score is " + highest_marks);  
    } 
    public static int maximum(int[] numbers) 
    {  
        int max = numbers[0]; 
          
        // for each loop 
        for (int num : numbers)  
        { 
            if (num > max) 
            { 
                max = num; 
            } 
        } 
    return max; 
    } 
}
