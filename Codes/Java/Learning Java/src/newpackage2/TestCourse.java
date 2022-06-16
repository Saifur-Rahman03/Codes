/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage2;

/**
 *
 * @author hp
 */
public class TestCourse {
    public static void main(String[] args) {
        Course course1 = new Course("Data Structure");
        Course course2 = new Course("OOP");
        
        course1.addStudent("Saifur Rahman");
        course1.addStudent("Asif");
        course1.addStudent("NAim");
        course1.printCourseDetails();
        
        course1.dropStudent("NAim");
        course1.printCourseDetails();
        
        course1.clear();
        course1.printCourseDetails();
        
        course2.printCourseDetails();
    }
}
