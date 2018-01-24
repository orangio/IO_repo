#include "CommentManagement.h"

Comment CommentManagement::addComment(string _description, int _idTask, int _idUser)
{
	Comment *comment = new Comment(_description, _idUser, _idTask);
	this->commentCount++;
	this->commentsList->push_back(*comment);
	cout << "Dodano komentarz do zadania o id: " << _idTask << "\n";
	return commentsList->back();
}

int CommentManagement::getLastCommentId() {
	if (this->getCommentCount() > 0)
	{
		
		Comment *tmp = &this->commentsList->back();
		return tmp->getId();
	}
}

int CommentManagement::getCommentCount() {
	return this->commentsList->size();
}

void CommentManagement::showComment(int idTask)
{
	vector<Comment>::iterator i;
	for (i = commentsList->begin(); i != commentsList->end(); i++)
		if (idTask == i->getIdTask())
			cout << "Komentarz uzytkownika od id: " << i->getIdUser() << " napisal: " << i->getDescription() << endl;
}

void CommentManagement::getCommentMock() {
	vector<Comment> *commentsMock = new vector<Comment>;
	int mockCount = 2;
	for (int i = 1; i <= mockCount; i++) {
		Comment * comment= new Comment("komentarz",1,i);
		commentsMock->push_back(*comment);
	}
	this->commentCount = commentsMock->size();
	this->setCommentList(commentsMock);
}

CommentManagement::CommentManagement()
{
	this->getCommentMock();
}

void CommentManagement::setCommentList(vector<Comment>*list)
{
	this->commentsList = list;
}