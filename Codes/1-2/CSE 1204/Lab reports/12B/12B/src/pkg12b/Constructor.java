/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12b;

public class Constructor {
    private final int x;
    private Constructor(){
    System.out.println("Constructor Called");
    x = 5;
    }
    public static void main(String[] args){
        Constructor obj = new Constructor();
        System.out.println("Value of x = " + obj.x);
    }
}
