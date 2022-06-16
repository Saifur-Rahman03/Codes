/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hp
 */
import java.util.*;
public class MathematicalFunction {
    public static void main(String[] args){
       float x;
       Scanner input = new Scanner(System.in);
       x = input.nextFloat();
       System.out.println(Math.ceil(x));
       System.out.println(Math.floor(x));
       System.out.println(Math.round(x));
       System.out.println(Math.rint(x));       
    }
}
