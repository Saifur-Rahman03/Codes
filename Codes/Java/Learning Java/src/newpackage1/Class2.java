/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage1;

/**
 *
 * @author hp
 */
public class Class2 {
    void aMethod(){
        Class1 c = new Class1();
        c.x = 1;
        c.y = 0;
        //c.z = 2; can't access because private variable
        c.m1();
        c.m2();
        //c.m3(); can't access because private method
    }
    public static void main(String[] args){
        
    }
}
