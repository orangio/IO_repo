#include "Komentarz.h"
Komentarz::Komentarz(string Tresc, int id_User) {
	id_komentarza = iid++;
	tresc = Tresc;
	id_user = id_User;
}
void Komentarz::dodaj_komentarz(Komentarz k, int id_zadania) {
	//zapisz do zadania komentarz
	//powiadomienie o komentarzu
}