#pragma once
#include <iostream>
#include "Comment.h"
#include "CommentManagement.h"
#include "Task.h"
#include "User.h"
#include "TaskManagement.h"
using namespace Tasks;
class Panel {
	int user_id;
	bool cond;
	//Powiadomienia pow= new Powiadomienia();

public:

	Panel();
	int initiate(User us);
	void zamknij();
};