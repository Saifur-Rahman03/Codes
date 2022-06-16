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
public class PassingObject {
    public static void main(String[] args){
        Circle c = new Circle();
        printAreas(c, 5);
    }
    public static void printAreas(Circle c, int n){
        int i = 1;
        System.out.println("Radius\t\tArea");                
        while(n >= 1){
            System.out.println(c.getRadius() + "\t\t" + c.getArea());
            n--;
            c.setRadius(c.getRadius() + 1);
        }
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