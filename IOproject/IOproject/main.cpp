#pragma once
#include "User.h"
#include "Panel.h"
#include <vector>
#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	//User user ("Ashu", "1234", "Jan", "Kowalki", "mojemail", true);
	User user ("Ash1", "1234", "Barbara", "Nowak", "mojemail1", false);
	//vector <User> userzy;
	//userzy.push_back(*user);
	
	for (;;)
	{
		cout << "\t PANEL GLOWNY\n";
		cout << "Wybierz opcje:" << endl;
		int choice;
		cout << "1- Panel managera\n2-\n3-\n";
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
				Panel panel(user.getId());
				if (panel.checkAssess(user.getIsManger()))
				{
					cout << "Masz dostep" << endl;
					break;
				}
				else
				{
					cout << "Nie masz dostêpu do tej opcji" << endl;
					break;
				}
			}
			default:
				cout << "Niepoprawny wybor" << endl;
		}
		
	}





	system("pause");
	return 0;
}