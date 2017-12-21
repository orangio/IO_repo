#pragma once
#include <iostream>
#include <string>
using namespace std;

class Komentarz {
	int id_komentarza;
	string tresc;
	int id_user;
	static int iid;
	
		
	
public:
	void dodaj_komentarz(Komentarz, int);
	Komentarz(string Tresc, int id_User);

};