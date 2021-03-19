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

	//Initialize the array of student object pointers
	Student* classRosterArray[5];

	
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);

	void remove(string remove_student_ID);

	void printAll();

	void printAverageDaysInCourse(string stud_ID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degree_to_print);


};