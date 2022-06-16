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
public class BinarySearch {
    public static void main(String[] args){
        int[] a = {2, 3, 4, 5, 6, 7, 1, 123, -5, 9, 456, -7};
    }
    
    public static int BinSearch(int[] a, int key){
        int low = 0;
        int high = a.length() - 1;
        
        while(high >= low){
            int mid = (low + high) / 2;
            if(key < a[mid])
                high = mid - 1;
            else if(key == a[mid])
                return mid;
            else
                low = mid + 1;
        }
        return -low-1;
    }
}
