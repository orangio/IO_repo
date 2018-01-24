#include "Comment.h"

int Comment::iid;

Comment::Comment(string _description, int _id_User, int _idTask) {

	description = _description;
	idUser = _id_User;
	idTask = _idTask;
	id = iid++;
}

Comment::Comment()
{
	description = "";
	idUser = NULL;
	idTask = NULL;
	id = iid++;
}

int Comment::getId()
{
	return id;
}

int Comment::getIdTask() { return idTask; }
string Comment::getDescription() { return description; }
int Comment::getIdUser() { return idUser; }