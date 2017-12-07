/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication12;

/**
 *
 * @author student
 */
public class Task {
    private int id_task;
    private String description;
    private String priority;
    private int id_creator;
    private int id_owner;
    
    public Task( String description, String priority, int id_creator, int id_owner)
    {
        this.id_task = 1;
        this.description = description;
        this.priority = priority;
        this.id_creator = id_creator;
        this.id_owner = id_owner;
        
    }
    
    public void setid_owner(int id_owner){
        this.id_owner = id_owner; 
    }
}
