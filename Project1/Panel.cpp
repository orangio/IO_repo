#pragma once
#include "Komentarz.h"
//#include "Powiadomienia.h"
#include "Task.h"
#include "TaskInterface.h"
#include "KomentarzHandler.h"
#include "Panel.h"


	Panel::Panel(int user_id) {
		this->user_id = user_id;
		//user_id = user_id;
		this->BP = BazaPortal();
	}

	void Panel::dodajZadanie(Tasks::Task t, int user_id) {
		BP.zapiszZadanie(t);
	};
	void Panel::usunZadanie(int id_zadania, int user_id) {
		BP.usunZadanie(id_zadania);
	};

	void Panel::dodaj_komentarz(Komentarz k) {
		BP.zapiszKomentarz(k);
	}

