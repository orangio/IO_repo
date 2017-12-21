#pragma once
#include "Komentarz.h"
//#include "Powiadomienia.h"
#include "Task.h"
#include "TaskInterface.h"
#include "KomentarzHandler.h"
class Panel {
	int user_id;
	BazaPortal BP;
	//Powiadomienia pow= new Powiadomienia();

public:

	Panel(int);
	void dodajZadanie(Tasks::Task t, int user_id) ;
	void usunZadanie(int id_zadania, int user_id) ;
	void dodaj_komentarz(Komentarz k);

};
