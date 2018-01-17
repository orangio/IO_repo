#pragma once
#include "TaskManagement.h"
using namespace Tasks;

Task TaskManagement::addTask(int user_id, string name, string description, double created, double updated) {
	//if (this->user.isLoggedIn())
	//{
	Task *task = new Task(++this->taskCount, user_id, name, description, created, updated);
	this->taskList->push_back(*task);
	cout << "Dodano zadanie. Id: " << task->id << "\n";
	//}
	//else
	//cout << "nie dodano";

	return taskList->back();
}

void TaskManagement::deleteTask(int id) {
	//if (this->user.isLoggedIn()) {
	bool found = false;
	vector<Task>::iterator it;
	for (it = taskList->begin(); it != taskList->end(); it++)
	{
		if (it->id == id)
		{
			found = true;
			taskList->erase(it);
			break;
		}
	}
	if (found)
		cout << "Usunieto zadanie od id: " << id << endl;
	else
		cout << "Nie znaleziono zadania o id: " << id << endl;
	//}
	//else
	//cout << "niezalogowany";
}

void TaskManagement::updateTask(int id, int user_id, string name, string desc) {
	//if (this->user.isLoggedIn()) {
	bool found = false;
	vector<Task>::iterator it;
	for (it = taskList->begin(); it != taskList->end(); it++) {

		if (it->id == id) {
			found = true;
			if (user_id != 0)
				it->user_id = user_id;
			if (name != "")
				it->name = name;
			if (desc != "")
				it->description = desc;

			it->updated = time(0);
			break;
		}

	}
	if (found)
		cout << "Zmodyfikowano zadanie od id: " << id << endl;
	else
		cout << "Nie znaleziono zadania o id: " << id << endl;
	//}
	//else
	//cout << "niezalogowany";
}

void TaskManagement::listTasks() {
	//if (this->user.isLoggedIn())
	//{
	vector<Task>::iterator it;
	cout << "\nLista taskow:\n";
	for (it = taskList->begin(); it != taskList->end(); it++)
	{
		time_t t = it->created;
		tm *d = localtime(&t);

		cout << it->id << '\t';
		cout << it->user_id << '\t';
		cout << it->description << '\t';
		cout << it->name << '\t';
		cout << d->tm_hour << ":" << d->tm_min << ":" << d->tm_sec << " " << d->tm_mday << "-" << d->tm_mon + 1 << "-" << d->tm_year << '\t';
		if (it->updated != 0) {
			t = it->updated;
			d = localtime(&t);
			cout << d->tm_hour << ":" << d->tm_min << ":" << d->tm_sec << " " << d->tm_mday << "-" << d->tm_mon + 1 << "-" << d->tm_year << '\n';
		}
		else {
			cout << "None\n";
		}
	}
	//}
	//else
	//cout << "niezalogowany";
}

void TaskManagement::setTaskList(vector<Task>* list) {
	this->taskList = list;
}

void TaskManagement::getTasks() {
	vector<Task> *tasksMock = new vector<Task>;
	int mockCount = 10;
	for (int i = 1; i <= mockCount; i++) {
		Task *task = new Task(i, i, "name", "desc", time(0), 0);
		tasksMock->push_back(*task);
	}
	this->taskCount = tasksMock->size();
	this->setTaskList(tasksMock);
}

int TaskManagement::getTaskCount() {
	return this->taskList->size();
}

TaskManagement::TaskManagement()
{
}

TaskManagement::TaskManagement(User user)
{
	this->user = user;
	this->getTasks();
}

TaskManagement::~TaskManagement()
{
}