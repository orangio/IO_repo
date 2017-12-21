#pragma once
#include "Task.h"
class TaskInterface {
	virtual void dodajZadanie(Tasks::Task t, int userid) = 0 {};
	virtual void usunZadanie(int id_zadania, int user_id) = 0 {};
}