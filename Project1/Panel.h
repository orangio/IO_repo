#pragma once
#include "Comment.h"
//#include "Powiadomienia.h"
#include "Task.h"
#include "TaskManagement.h"
#include "KomentarzHandler.h"
class Panel {
	int user_id;
	//Powiadomienia pow= new Powiadomienia();

public:

	Panel(int);
	void dodajZadanie(Task t, int user_id) ;
	void usunZadanie(int id_zadania, int user_id) ;
	void zmienZadanie(int id_task, int user_id);
	void dodaj_komentarz(Comment k);

};
