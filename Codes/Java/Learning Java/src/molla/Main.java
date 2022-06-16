/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package molla;

/**
 *
 * @author hp
 */
public class Main {
      public static void main(String[] args) { 

        Student zs = new Student(); 

        zs.setId("370211X"); 

        zs.setName("Zhang San"); 

        zs.say(); 

        System.out.println(zs.getId() + " , " + zs.getName()); 

 

        Student ls = new Student("330106","Li Si","20183001007",98); 

        ls.say(); 

        System.out.println(ls.getId() + " : " + ls.getName()); 

 

        Student ww = new Student(); 

        ww.setName("Wang Wu"); 

        ww.say(); 

 

        People zl = new People("370202", "Zhao Liu"); 

        zl.say(); 

    } 
}
