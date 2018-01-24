#include "TaskManagement.h"
using namespace Tasks;

Task TaskManagement::addTask(int user_id, int assignee_id, short priority, string name, string description, double created, double updated) {

	Task *task = new Task(this->getLastTaskId() + 1, user_id, assignee_id, priority, name, description, created, updated);
	this->taskCount++;
	this->taskList->push_back(*task);
	cout << "Dodano zadanie. Id: " << task->getId() << "\n";
	// tutaj mogloby byc powiadomienie
	return taskList->back();
}

int TaskManagement::getLastTaskId() {
	if (this->getTaskCount() > 0) {
		Task *tmp = &this->taskList->back();
		return tmp->getId();
	}
}

void TaskManagement::deleteTask(int id) {

	bool found = false;
	vector<Task>::iterator it;
	for (it = taskList->begin(); it != taskList->end(); it++)
	{
		if (it->getId() == id)
		{
			found = true;
			taskList->erase(it);
			break;
		}
	}
	if (found) {
		cout << "Usunieto zadanie od id: " << id << endl;
		// tutaj mogloby byc powiadomienie
	}
	else
		cout << "Nie znaleziono zadania o id: " << id << endl;

}

void TaskManagement::updateTask(int id, int user_id, int assignee_id, short priority, string name, string desc) {

	bool found = false;
	vector<Task>::iterator it;
	for (it = taskList->begin(); it != taskList->end(); it++) {

		if (it->getId() == id) {
			found = true;
			if (assignee_id != 0)
				it->setAssigneeId(assignee_id);
			if (user_id != 0)
				it->setUserId(user_id);

			it->setName(name);
			it->setDescription(desc);
			it->setPriority(priority);
			it->setUpdated(time(0));
			break;
		}

	}
	if (found) {
		cout << "Zmodyfikowano zadanie od id: " << id << endl;
		// tutaj mogloby byc powiadomienie
	}
	else
		cout << "Nie znaleziono zadania o id: " << id << endl;

}

void TaskManagement::listTasks() {

	vector<Task>::iterator it;
	cout << "\nLista taskow:\n";
	cout << setfill('-');
	cout << setw(4) << std::right << "ID\t"
		<< setw(4) << std::right << "aID\t"
		<< setw(4) << std::right << "uID\t"
		<< setw(10) << std::right << "Priority\t"
		<< setw(20) << std::right << "Name\t"
		<< setw(20) << std::right << "Description\t"
		<< setw(20) << std::right << "Created\t"
		<< setw(20) << std::right << "Updated\n";
	for (it = taskList->begin(); it != taskList->end(); it++)
	{
		cout << setw(4) << std::right;
		cout << it->getId() << "|\t";
		cout << setw(4) << std::right;
		cout << it->getAssigneeId() << "|\t";
		cout << setw(4) << std::right;
		cout << it->getUserId() << "|\t";
		cout << setw(10) << std::right;
		cout << it->getPriority() << "|\t";
		cout << setw(20) << std::right;
		cout << it->getName() << "|\t";
		cout << setw(20) << std::right;
		cout << it->getDescription() << "|\t";
		cout << setw(20) << std::right;
		cout << it->getFormattedDate(it->getCreated()) << "|\t";
		cout << setw(20) << std::right;
		if (it->getUpdated() != 0) {
			cout << it->getFormattedDate(it->getUpdated());
		}
		else {
			cout << "None\n";
		}
	}
}


void TaskManagement::setTaskList(vector<Task>* list) {
	this->taskList = list;
}

void TaskManagement::getTasksMock() {
	vector<Task> *tasksMock = new vector<Task>;
	int mockCount = 10;
	for (int i = 1; i <= mockCount; i++) {
		Task *task = new Task(i, i, i, (short)i, "name", "desc", time(0), 0);
		tasksMock->push_back(*task);
	}
	this->taskCount = tasksMock->size();
	this->setTaskList(tasksMock);
}

int TaskManagement::getTaskCount() {
	return this->taskList->size();
}

vector<Task> *TaskManagement::getTasks() {
	return this->taskList;
}


TaskManagement::TaskManagement()
{
	this->getTasksMock();

}




TaskManagement::~TaskManagement()
{
}