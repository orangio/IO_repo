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
public class KomentarzHandler {
    public void dodaj_komentarz(String tresc, int id_usera, int id_zadania)
    {
        BazaPortal bazaPortal=new BazaPortal();
        Komentarz asd=new Komentarz(tresc,id_usera);
        bazaPortal.zapiszKomentarz(asd);
    }
}
