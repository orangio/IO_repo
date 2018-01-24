#pragma once
#include "User.h"
#include "Panel.h"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;


int main() {
	User user("Ashu", "1234", "Jan", "Kowalki", "mojemail", true);
	//User user ("Ash1", "1234", "Barbara", "Nowak", "mojemail1", false);
	//vector <User> userzy;
	//userzy.push_back(*user);

	for (;;)
	{
		cout << "PANEL GLOWNY\n\n";
		cout << "Wybierz opcje:" << endl;
		int choice;
		cout << "1- Panel managera " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			Panel panel;
			panel.initiate(user);
			break;
		}
		default:
			cout << "Niepoprawny wybor" << endl;
		}

	}





	system("pause");
	return 0;
}