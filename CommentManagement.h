#pragma once
#include "Comment.h"
#include<iostream>
#include<string>
#include<vector>

class CommentManagement {
private:
	vector<Comment> *commentsList;
	int commentCount;
	void getCommentMock();
	void setCommentList(vector<Comment>*list);

public:
	void addComment(string description, int idTask, int idUser);
	int getLastCommentId();
	void showComment(int idTask);
	int getCommentCount();

	CommentManagement();
	//~CommentManagement();


};