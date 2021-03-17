#pragma once
/*
#include <iostream>

#include "Degree.h"
#include "Student.h"*/

using namespace std;

class Roster {
private:
	//nothing here yet

public:

	//Constructor
	Roster();

	//Destructor
	~Roster();


	void add();

	void remove();

	void printAll();

	void printAverageDaysInCourse();

	void printInvalidEmails();

	void printByDegreeProgram();



	void parse_string();
};