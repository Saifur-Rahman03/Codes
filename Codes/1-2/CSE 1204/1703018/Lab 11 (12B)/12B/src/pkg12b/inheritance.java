/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12b;

/**
 *
 * @author user
 */
class A{
    int i, j;
    void showij(){
        System.out.println("i and j: " + i + " " + j);
    }
}
class B extends A{
    int k;
    void showk(){
        System.out.println("k: " + k);
    }
    void sum(){
        System.out.println("i + j + k: " + (i+j+k));
    }
}
public class inheritance {
    public static void main(String[] args){
        A sup = new A();
        B sub = new B();
        sup.i = 10;
        sup.j = 20;
        sup.showij();
        sub.i = 5;
        sub.j = 6;
        sub.k = 7;
        sub.sum();
    }
}
