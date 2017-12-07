package javaapplication12;

/**
 * Created by Filip on 06.12.2017.
 */
public interface TaskInterface {
    void dodajZadanie(Task t,int userid);
    void usunZadanie(int id_zadania, int user_id);
}
