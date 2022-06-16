
import java.util.*;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hp
 */
public class ArrayForeachLoop {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("input no: ");
        int n = input.nextInt();
        System.out.println();
        int array[] = new int[n];
        for(int i = 0; i < n; i++){
            array[i] = (int)(Math.random() * 100);
            System.out.print(array[i] + " ");
        }
        int max = 0;
        for(int i = 0; i < array.length; i++){
            if(array[i] >= max){
                max = array[i];
            }
        }
        System.out.println();
        System.out.println("Max random number(1-100): " + max);
        int[] sortedArray = new int[n];
        for(int i = 0; i < n; i++){
            sortedArray[i] = array[i];
        }
        Arrays.sort(array);
        for(int e: sortedArray){
            System.out.print(e + " ");
        }
        System.out.println();
        for(int e: array){
            System.out.print(e + " ");
        }
        
    }
}
