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
public class C {
    private int p;
    public C(){
        this(10); //this call must be done first
        System.out.println("C's no-arg constructor is invoked");
    }
    public C(int p) {
        this.p = p;
    }
    public void setP(int p) {
        this.p = p;
    }
    public int getP() {
        return this.p;
    }    
}
