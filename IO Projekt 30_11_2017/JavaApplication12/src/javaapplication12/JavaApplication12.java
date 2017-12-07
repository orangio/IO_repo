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
public class JavaApplication12 {

    
    public static void main(String[] args)
    {
        Panel panel = new Panel(2137);
        Task t = new Task("blad","low",1,1);
        panel.dodajZadanie(t, 2);
    }
    /**
     * @param args the command line arguments
     */
    
}
