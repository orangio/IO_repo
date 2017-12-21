#pragma once
#include <string>
#include "Komentarz.h"
#include "Task.h"
using namespace std;
class BazaPortal {
	string dbuser;
	string dbpass;
public:
		void zapiszKomentarz(Komentarz asd) {};
	void zapiszZadanie(Tasks::Task zad) {};
	void usunZadanie(int task_id) {};
}