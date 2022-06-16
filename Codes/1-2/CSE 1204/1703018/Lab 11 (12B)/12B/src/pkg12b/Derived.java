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
class Derived extends NewClass{
    Derived(){
        System.out.println("Derived Constructor");
        System.out.println("n = " + n);
        //System.out.println("n_pri = " + 4 + n_pri);
        System.out.println("n_pro = " + n_pro);
        System.out.println("n_pub = " + n_pub);
    }
}
