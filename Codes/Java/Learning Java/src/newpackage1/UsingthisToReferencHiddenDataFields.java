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
public class UsingthisToReferencHiddenDataFields {
    public static void main(String[] args){
        F f1 = new F();
        F f2 = new F();
        f1.setI(10);
        F.setK(10.05);
        System.out.println(f1.getI() + " " + F.getK());
    }
}
class F {
    private int i = 5;
    private static double k = 0;
    
    public void setI(int i) {
        this.i = i;
    }
    public int getI(){
        return this.i;
    }
    public static void setK(double k) {
        F.k = k;
    }
    public static double getK(){
        return F.k;
    }
}