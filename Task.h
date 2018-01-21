#pragma once
#include<string>
#include<ctime>
#include<iostream>
namespace Tasks {
	using namespace std;
	class Task
	{
	public:
		Task();
		Task(int id, int user_id, int assignee_id, short priority, string name, string description, double created, double updated);
		~Task();
		int getId();
		int getUserId();
		int getAssigneeId();
		int getPriority();
		string getName();
		string getDescription();
		double getCreated();
		double getUpdated();
		string getFormattedDate(double timestamp);
		void setId(int id);
		void setUserId(int user_id);
		void setAssigneeId(int assignee_id);
		void setPriority(short priority);
		void setName(string name);
		void setDescription(string description);
		void setCreated(double created);
		void setUpdated(double created);

	private:
		int id, user_id, assignee_id;
		short priority;
		string name, description;
		double created, updated;
	};

}