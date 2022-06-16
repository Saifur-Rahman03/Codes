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
class People {
    protected String id;
    protected String name;
    
    public People() {
        id = "01";
        name = "Pintia Student";
    }
    public People(String newId, String newName) {
        id = newId;
        name = newName;
    }
    public String getId() {
        return id;
    }
    public String getName() {
        return name;
    }
    public void setName(String newName) {
        name = newName;
    }
    public void setId(String newId) {
        id = newId;
    }
    void say() { 

        System.out.println("I'm a student. My name is " + this.name + "."); 

    } 
}
