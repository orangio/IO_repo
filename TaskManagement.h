#pragma once
#include "Task.h"
#include<vector>
#include<iostream>
#include<string>
#include <time.h>
#include<iomanip>
namespace Tasks {

	using namespace std;

	class TaskManagement
	{
	private:
		vector<Task> *taskList;

		int taskCount;

		void getTasksMock();
		void setTaskList(vector<Task>* list);

	public:
		Task addTask(int user_id, int assignee_id, short priority, string name, string description, double created, double updated);
		void deleteTask(int id);
		void updateTask(int id, int user_id, int assignee_id, short priority, string name, string desc);
		void listTasks();
		int getTaskCount();
		vector<Task> *getTasks();

		TaskManagement();
		~TaskManagement();
	};

}

//metoda gettaskbyid(id)
//for ... (id.vextor = id.argumentu) return.id