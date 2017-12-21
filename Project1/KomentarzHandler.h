#pragma once
#include <string>
#include "BazaPortal.h"
#include "Komentarz.h"
using namespace std;
class KomentarzHandler {
public: 
	void dodaj_komentarz(string tresc, int id_usera, int id_zadania)
	{
		BazaPortal bazaPortal;
		Komentarz asd(tresc, id_usera);
		bazaPortal.zapiszKomentarz(asd);
	}
}