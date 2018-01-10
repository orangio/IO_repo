#pragma once
#include "Comment.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class CommentManagement {
private:
	vector<Comment> commentsList;
public:
	
	void addComment(string description, int idTask, int idUser);
	

};