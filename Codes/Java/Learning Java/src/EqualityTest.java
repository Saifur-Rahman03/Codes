/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hp
 */
public class EqualityTest {
    public static void main(String[] args){
        double x = 1 - 0.1 - 0.1 - 0.1 - 0.1 - 0.1;
        System.out.println(x == 0.5);
        
        final double EPSILON = 1E-14;
        if(Math.abs(x - 0.5) < EPSILON)
            System.out.println(x + " is approximately " + 0.5);
    }
}
