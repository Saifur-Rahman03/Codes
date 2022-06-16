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
public class ArrayOfObjects {
    public static void main(String[] args){
        Circle[] c;
        c = createCircleArray();
        printCircleArray(c);
        double sum = sumCircleArray(c);
        System.out.println("\nThe total Area = " + sum);
    }
    public static Circle[] createCircleArray(){
        Circle[] c = new Circle[10];
        for(int i = 0; i < c.length; i++){
            c[i] = new Circle(Math.random() * 10);
        }
        return c;
    }
    public static void printCircleArray(Circle[] c){
        System.out.printf("%-30s%-15s\n", "Radius", "Area");
        for(int i = 0; i < c.length; i++){
            System.out.printf("%-30f%-15f\n", c[i].getRadius(), c[i].getArea());
        }
    }
    public static double sumCircleArray(Circle[] c){
        double sumArea = 0;
        for(int i = 0; i < c.length; i++){
            sumArea += c[i].getArea();
        }
        return sumArea;
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