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
public class Panel implements Komentarze,TaskInterface,Powiadomienia {
    int user_id;
    KomentarzHandler kh ;
    BazaPortal BP ;
    //Powiadomienia pow= new Powiadomienia();
    
    Panel(int user_id){

        this.user_id=user_id;
        kh=new KomentarzHandler();
        BP=new BazaPortal();
    }
    public void dodajZadanie(Task t, int user_id){
        t.setid_owner(user_id);
        BP.zapiszZadanie(t);
    };
    public void usunZadanie(int id_zadania, int user_id){
        BP.usunZadanie(id_zadania);
    };
    public void pow_nowy_komentarz(Komentarz kom){};
    public void pow_nowe_zadanie(Task zad){};

    public void dodaj_komentarz(Komentarz k) {
        BP.zapiszKomentarz(k);
        pow_nowy_komentarz(k);
    }
    
    
}
