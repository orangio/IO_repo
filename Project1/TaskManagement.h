#pragma once
#include "Task.h"
#include "User.h"
#include<vector>
#include<iostream>
#include<string>
#include <time.h>


	using namespace std;

	class TaskManagement
	{
	private:
		vector<Task> *taskList;
		User user;
		int taskCount;

		void getTasks();
		void setTaskList(vector<Task>* list);

	public:
		Task addTask(int user_id, string name, string description, double created, double updated);
		void deleteTask(int id);
		void updateTask(int id, int user_id, string name, string desc);
		void listTasks();
		int getTaskCount();

		TaskManagement();
		~TaskManagement();
		TaskManagement(User user);
	};

