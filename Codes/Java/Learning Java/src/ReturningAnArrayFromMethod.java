
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
public class ReturningAnArrayFromMethod {
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
        int[] revArr = new int[n];
        revArr = reverse(array);
        System.out.println();
        for(int e: revArr){
            System.out.print(e + " ");
        }
        System.out.println();
    }
    
    public static int[] reverse(int[] list){
        int[] array = new int[list.length];
        for(int i = 0, j = list.length - 1; i < list.length; i++, j--){
            array[i] = list[j];
        }
        return array;
    }
}
