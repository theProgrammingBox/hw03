#pragma once
#include "Date.h"

class Employee
{
private:
	string name;
	int id;
	string phone;
	int age;
	string gen;
	string job;
	string salary;
	Date hireData;

public:
	Employee() : name(""), id(0), phone(""), age(0), gen(""), job(""), salary(""), hireData(){};
	Employee(string name, int id, string phone, int age, string gen, string job, string salary, Date hireData)
		: name(name), id(id), phone(phone), age(age), gen(gen), job(job), salary(salary), hireData(hireData){};
	~Employee(){};

	void setName(string name) { this->name = name; }
	void setId(int id) { this->id = id; }
	void setPhone(string phone) { this->phone = phone; }
	void setAge(int age) { this->age = age; }
	void setGen(string gen) { this->gen = gen; }
	void setJob(string job) { this->job = job; }
	void setSalary(string salary) { this->salary = salary; }
	void setHire(Date hireData) { this->hireData = hireData; }

	string str() const;
	friend ostream &operator<<(ostream &os, const Employee &employee);
};