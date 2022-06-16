/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage2;

import newpackage1.Class1;

/**
 *
 * @author hp
 */
public class Class3 {
    void aMethod(){
        Class1 c = new Class1();
        c.x = 0;
        //c.y = 3; not public
        //c.z = 4; private
        c.m1();
       // c.m2(); not public
       //c.m3(); private        
    }
    public static void main(String[] args){
        
    }
}
