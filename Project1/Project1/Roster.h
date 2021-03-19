#pragma once
/*
#include <iostream>

#include "Degree.h"*/
#include "Student.h"

using namespace std;

class Roster {
private:
	//nothing here yet

public:
	
	//Constructor
	Roster();

	//Destructor
	~Roster();

	//initialize the array of pointers
	Student* classRosterArray[5];


	void add();

	void remove(string remove_student_ID);

	void printAll();

	void printAverageDaysInCourse(string stud_ID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degree_to_print);

	void parse_string();
};