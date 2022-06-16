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
public class Course {
    private String courseName;
    private String[] students = new String[180];
    private int numberOfStudents;
    
    public Course(String courseName) {
        this.courseName = courseName;
        numberOfStudents = 0;
    }
    public void addStudent(String student) {
        students[numberOfStudents++] = student;
    }
    public String[] getStudents() {
        return students;
    }
    public int getNumberOfStudents() {
        return numberOfStudents;
    }
    private void setNumberOfStudents(int numberOfStudents) {
        this.numberOfStudents = numberOfStudents;
    }
    public String getCourseName() {
        return courseName;
    }
    public void dropStudent(String student) {
        int i;
        for(i = 0; i < this.getNumberOfStudents(); i++) {
            if(students[i] == student){
                break;
            }
        }
        for(int j = i; j < this.getNumberOfStudents(); j++) {
            students[j + 1] = students[j];
        }
        this.setNumberOfStudents(numberOfStudents - 1);
    }
    public void clear() {
        students = null;
        this.setNumberOfStudents(0);
    }
    public void printCourseDetails() {
        System.out.println("CourseName: " + this.courseName);
        System.out.println("Number of Students: " + this.getNumberOfStudents());
        System.out.println("Students: ");
        if(this.getNumberOfStudents() == 0)
            System.out.println("No Students Enrolled");
        for(int i = 0; i < this.getNumberOfStudents(); i++) {
            System.out.println(students[i]);
        }
        System.out.println();
    }
}
