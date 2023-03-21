#pragma once
#include<iostream>
#include<string>
#include"Date.h"

using namespace std;
class Ticket
{
	static int num;
	int myNum;
	string dest;
	string name;
	Date depart;

public:
	Ticket();
	Ticket(string d, string n, Date dp);

	void setDest(string d);
	void setName(string n);
	void setDep(Date d);

	string getDest() const;
	string getName() const;
	Date getDep() const;
	int getMNum() const;
	int getNum() const;
	
	void show() const;

	bool operator < (const Ticket t) const;
};

