/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hp
 */
public class CircleWithStatic {
    public static void main(String[] args) {
        Circle c1 =  new Circle();
        System.out.println("c1 is created");
        System.out.println("No of Objects: " + Circle.numberOfObject);
        Circle c2 = new Circle(5);
        System.out.println("c2 is created");
        System.out.println("No of objects: " + Circle.getNoOfObject());
        c1.radius = 9;
        System.out.println("c1 is changed");
        System.out.println("No of Objects: " + Circle.getNoOfObject());
        System.out.printf("Area of c1: %5.2f\n", c1.getArea());
        System.out.printf("Area of c2: %6.2f\n", c2.getArea());
    }
}

class Circle {
    int radius;
    static int numberOfObject = 0;
    Circle() {
        radius = 0;
        numberOfObject++;
    }
    Circle(int newRadius) {
        radius = newRadius;
        numberOfObject++;
    }
    static int getNoOfObject() {
        return numberOfObject;
    }
    double getArea(){
        return Math.PI * radius * radius;
    }
}