/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12b1;

/**
 *
 * @author user
 */
class OtherPackage {
    OtherPackage(){
        pkg12b.NewClass p = new pkg12b.NewClass();
        System.out.println("Other package constructor");
        //System.out.println("n = " + p.n);
        //System.out.println("n_pri = " + p.n_pri);
        //System.out.println("n_pro = " + p.n_pro);
        System.out.println("n_pub = " + p.n_pub);
    }
}
