#pragma once
#include <iostream>
#include "Degree.h"

using namespace std;

//defines the student class
class Student {
private:
	string student_id, first_name, last_name, student_email;
	int student_age;
	int day_to_complete[3]; //array of integers to store days to complete classes
	DegreeProgram degree_program;

public:
	
	//Constructor
	Student();

	//Destructor
	~Student();

	//Defining the set methods for each private class variable.
	void set_student_id();
	void set_first_name();
	void set_last_name();
	void set_student_email();
	void set_student_age();
	void set_degree_program();
	void set_day_to_complete();

	//DEfining the getters for each private class variable
	string get_student_id();
	string get_first_name();
	string get_last_name();
	string get_student_email();
	int get_student_age();
	DegreeProgram get_degree_program();
	int get_day_to_complete();



	
	void student_test();

};