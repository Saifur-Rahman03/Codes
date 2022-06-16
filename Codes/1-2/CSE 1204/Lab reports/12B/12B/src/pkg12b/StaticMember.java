/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12b;

public class StaticMember {
    double radius;
    static int numberOfObjects = 0;
    StaticMember(){
        radius = 1;
        numberOfObjects++;
    }
    StaticMember(int newradius){
        radius = newradius;
        numberOfObjects++;
    }
    public static void main(String[] args) {
    System.out.println("Before creating objects");
    System.out.println("The number of Circle objects is " +
    StaticMember.numberOfObjects);
    StaticMember c1 = new StaticMember();
    System.out.println("\nAfter creating c1");
    System.out.println("c1: radius (" + c1.radius +
    ") and number of Circle objects (" +
    c1.numberOfObjects + ")");
    StaticMember c2 = new StaticMember(5);
    c1.radius = 9;
    System.out.println("\nAfter creating c2 and modifying c1");
    System.out.println("c1: radius (" + c1.radius +
    ") and number of Circle objects (" +
    c1.numberOfObjects + ")");
    System.out.println("c2: radius (" + c2.radius +
    ") and number of Circle objects (" +
    c2.numberOfObjects + ")");
    }
}
