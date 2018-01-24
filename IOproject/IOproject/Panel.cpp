#pragma once
//#include "Comment.h"
//#include "Powiadomienia.h"
//#include "Task.h"
//#include "TaskManagement.h"
#include <iostream>
//#include <String>
#include "Panel.h"
#include "TaskManagement.h"

using namespace Tasks;

Panel::Panel() {
	cond = true;
}

int Panel::initiate(User us)
{
	if (!us.getIsManger())
		return -1;
	else {
		while (cond) {
			cout << "Co chcialbys zrobic? Wpisz liczbe" << endl;
			cout << "1: Dodaj zadanie" << endl;
			cout << "2: Usun Zadanie" << endl;
			cout << "3: Dodaj komentarz" << endl;
			cout << "4: Zmien zadanie" << endl;
			cout << "5: Wyjdz z panelu" << endl;
			
			TaskManagement tm;
			CommentManagement cm;
			int wybor;
			cin >> wybor;
			switch (wybor) {
			case 1:
			{
				string tname;
				cout << "Podaj nazwe zadania" << endl;
				cin >> tname;
				string description;
				cout << "Podaj opis zadania" << endl;
				cin >> description;
				int aid;
				cout << "Podaj id komu przypisac" << endl;
				cin >> aid;
				int pr;
				cout << "Podaj priorytet (1-3)" << endl;
				cin >> pr;

				tm.addTask((int)us.getId(), aid, pr, tname, description, 1.0, 0);
				break;
			}
			case 2:
				cout << "Podaj id zadania" << endl;
				int iid;
				cin >> iid;
				tm.deleteTask(iid);
				break;
			case 3:
			{
				int idt;
				cout << "Podaj id Taska" << endl;
				cin >> idt;
				cout << "Podaj tresc" << endl;
				string trescKom;
				cin >> trescKom;
				cm.addComment(trescKom, idt, us.getId());
				break;
			}
			case 4:
			{

				cout << "Podaj id zadania" << endl;
				int iid;
				cin >> iid;
				int aid;
				cout << "Podaj id komu przypisac" << endl;
				cin >> aid;
				string tname;
				int pr;
				cout << "Podaj nowy priorytet (1-3)" << endl;
				cin >> pr;
				cout << "Podaj nowa nazwe zadania" << endl;
				cin >> tname;
				string description;
				cout << "Podaj nowy opis zadania" << endl;
				cin >> description;
				tm.updateTask(iid, (int)us.getId(), aid, pr, tname, description);
				//void updateTask(int id, int user_id, int assignee_id, short priority, string name, string desc);
			}
			case 5:
				zamknij();
				break;
			case 6:
				tm.listTasks();
				break;
			case 7:
				cm.showComment(4);

			}
		}
	}
	return 0;
}
void Panel::zamknij() {
	cond = false;
}