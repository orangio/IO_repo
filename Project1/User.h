#pragma once
#include <string>
using namespace std;
class User {
	string username;
	string password;
	string name;
	string surname;
	string email;
	bool isLogged;
	static int numOfUsers;
public:
	User(string username, string password, string name, string surname, string email);

	string getUsername();

	string getEmail();

	string getName();

	string getSurname();

	bool isLoggedIn();

	static string registerUser(string username, string password, string name, string surname, string email, User tab[], int size, User us);

	string authenticateUser(string username, string password);


	User();
	static int getnumOfUsers();
};