/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hp
 */
public class CircleWithPrivate {
    public static void main(String[] args){
        Circle c = new Circle(5.0);
        System.out.println("The area of circle with radius " + c.getRadius()
                + " is " + c.getArea());
        //increase radius by 10%
        c.setRadius(c.getRadius() * 1.1);
        System.out.println("The area of circle with radius " + c.getRadius()
                + " is " + c.getArea());
        System.out.println("No of objects created: " + Circle.getNoOfObject());
    }
}

class Circle{
    private double radius = 1;
    private static int NoOfObject = 0;
    
    
    public Circle(){
        NoOfObject++;
    }
    public Circle(double newRadius){
        radius = newRadius;
        NoOfObject++;
    }
    public static int getNoOfObject(){
        return NoOfObject;
    }
    public double getRadius(){
        return radius;
    }
    public void setRadius(double newRadius){
        radius = (newRadius > 0) ? newRadius : 0;
    }
    public double getArea(){
        return Math.PI * radius * radius;
    }
}