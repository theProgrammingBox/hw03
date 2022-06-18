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

	void SetName(string name) { this->name = name; }
	void SetId(int id) { this->id = id; }
	void SetPhone(string phone) { this->phone = phone; }
	void SetAge(int age) { this->age = age; }
	void SetGen(string gen) { this->gen = gen; }
	void SetJob(string job) { this->job = job; }
	void SetSalary(string salary) { this->salary = salary; }
	void SetHire(Date hireData) { this->hireData = hireData; }

	string Str() const;
	friend ostream &operator<<(ostream &os, const Employee &employee);
};