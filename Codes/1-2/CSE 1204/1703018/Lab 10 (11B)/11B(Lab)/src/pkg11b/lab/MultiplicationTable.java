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
public class MultiplicationTable {
    public static void main(String[] args){
        System.out.println("      Multliplication Table");
        System.out.println();
        for(int i = 1; i < 10; i++){
            System.out.print(i + "|");
            for(int j = 1; j < 10; j++)
                System.out.printf("%3d", i * j);
            System.out.println();
            
        }
    }
}
