#pragma once
#include "Comment.h"
#include<iostream>
#include<string>
#include<vector>

class CommentManagement {
private:
	vector<Comment> commentsList;
public:

	void addComment(string description, int idTask, int idUser);

};