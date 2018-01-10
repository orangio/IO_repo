#include "CommentManagement.h"

void CommentManagement::addComment(string _description, int _idTask, int _idUser)
{
	Comment comment(_description, _idUser, _idTask);
	commentsList.push_back(comment);
}