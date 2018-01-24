#include "Task.h"

using namespace Tasks;

Task::Task()
{
	this->id = NULL;
	this->user_id = NULL;
	this->assignee_id = NULL;
	this->priority = NULL;
	this->name = "";
	this->description = "";
	this->created = NULL;
	this->updated = NULL;
}

Task::Task(int id, int user_id, int assignee_id, short priority, string name, string description, double created, double updated)
{
	this->id = id;
	this->user_id = user_id;
	this->assignee_id = assignee_id;
	this->priority = priority;
	this->name = name;
	this->description = description;
	this->created = created;
	this->updated = updated;
}

int Task::getId() { return this->id; }
int Task::getUserId() { return this->user_id; }
int Task::getAssigneeId() { return this->assignee_id; }
int Task::getPriority() { return this->priority; }
string Task::getName() { return this->name; }
string Task::getDescription() { return this->description; }
double Task::getCreated() { return this->created; }
double Task::getUpdated() { return this->updated; }
void Task::setId(int id) { this->id = id; }
void Task::setUserId(int user_id) { this->user_id = user_id; }
void Task::setAssigneeId(int assignee_id) { this->assignee_id = assignee_id; }
void Task::setPriority(short priority) { this->priority = priority; }
void Task::setName(string name) { this->name = name; }
void Task::setDescription(string description) { this->description = description; }
void Task::setCreated(double created) { this->created = created; }
void Task::setUpdated(double updated) { this->updated = updated; }

string Task::getFormattedDate(double timestamp) {
	char buffer[20];
	time_t rawTime = timestamp;
	tm timeinfo;
	localtime_s(&timeinfo, &rawTime);

	strftime(buffer, 20, "%Y-%m-%d %H:%M:%S", &timeinfo);
	return string(buffer);
}


Task::~Task()
{
}