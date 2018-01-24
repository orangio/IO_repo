
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Comment {

	string description;
	int id;
	int idUser;
	int idTask;
	static int iid;


public:
	int getId();
	int getIdTask();
	string getDescription();
	int getIdUser();

	Comment();
	Comment( string _description, int _id_User, int idTask);
	

};