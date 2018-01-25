#pragma once
#include<iostream>
#include <conio.h>
#include<string>
#include "Panel.h"
#include "TaskManagement.h"

using namespace Tasks;

Panel::Panel() {
	cond = true;
}

int Panel::initiate(User us)
{
	TaskManagement *tm = new TaskManagement();
	CommentManagement *cm = new CommentManagement();
	if (!us.getIsManger())
		return -1;
	else {
		while (cond) {
			system("CLS");
			cout << "Co chcialbys zrobic? Wpisz liczbe" << endl;
			cout << "1: Dodaj zadanie" << endl;
			cout << "2: Usun Zadanie" << endl;
			cout << "3: Wyswietl wszystkie zadania" << endl;
			cout << "4: Dodaj komentarz" << endl;
			cout << "5: Wyswietl komentarze" << endl;
			cout << "6: Zmien zadanie" << endl;
			cout << "7: Wyjdz z panelu" << endl;
			
			
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

				tm->addTask((int)us.getId(), aid, pr, tname, description, time(0), 0);
				tm->listTasks();
				break;
			}
			case 2:
				cout << "Podaj id zadania" << endl;
				int iid;
				cin >> iid;
				tm->deleteTask(iid);
				break;
			case 3:
				tm->listTasks();
				break;
			case 4:
			{
				int idt;
				cout << "Podaj id Taska" << endl;
				cin >> idt;
				cout << "Podaj tresc" << endl;
				string trescKom;
				cin >> trescKom;
				cm->addComment(trescKom, idt, us.getId());
				break;
			}
			case 5:
			{
				int iddd;
				cout << "Komentarze do ktorego zadania chcesz wyswietlic?" << endl;
				cin >> iddd;
				cm->showComment(iddd);
				break;
			}
			case 6:
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
				tm->updateTask(iid, (int)us.getId(), aid, pr, tname, description);
				//void updateTask(int id, int user_id, int assignee_id, short priority, string name, string desc);
			}
			case 7:
				zamknij();
				break;
			
			

			}
			_getch();
			cin.clear();
		}
	}
	return 0;
}
void Panel::zamknij() {
	cond = false;
}