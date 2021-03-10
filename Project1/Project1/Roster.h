#pragma once

#include <iostream>

#include "Degree.h"
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

	string* classRosterArray[];

	void rostertest();

	void parsestring();
};