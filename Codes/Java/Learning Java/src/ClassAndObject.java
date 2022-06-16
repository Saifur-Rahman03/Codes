/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hp
 */
public class ClassAndObject {
    public static void main(String[] args){
        Student student1 = new Student();
        student1.name = "Saifur Rahman";
        student1.roll = 1703018;
        student1.isEngineer = true;
        student1.gender = 'M';
        student1.printDetails();
        Student student2 = new Student();
        student2.printDetails();
    }
}

class Student{
    String name;
    int roll;
    boolean isEngineer;
    char gender;
    void printDetails(){
        System.out.println("name: " + name);
        System.out.println("roll: " + roll);
        System.out.println("isEngineer ? " + isEngineer);
        System.out.println("gender: " + gender);
        System.out.println();
    }
}