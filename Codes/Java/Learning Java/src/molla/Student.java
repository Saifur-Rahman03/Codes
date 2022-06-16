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
class Student extends People{
    protected String sid; 

    protected int score;
    
    public Student(){
    	name="Pinita Student";
    }
    
    public Student(String id, String name, String sid, int score) { 

        super(id, name); 

        this.sid = sid; 

        this.score = score; 

    }

    public void say() { 

        System.out.println("I'm a student. My name is " + this.name + "."); 

    } 

}
