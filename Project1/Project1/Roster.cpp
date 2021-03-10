#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#include "Degree.h"
#include "Student.h"
#include "Roster.h"


using namespace std;

//This is the input as specified by the assignment.
const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Brennan,Laird,blair10@wgu.edu,41,7,14,18,SOFTWARE" };

//Constructor for the roster object
Roster::Roster() {

	cout << "Roster constructor has run" << endl;
	//cout << sizeof(studentData)/sizeof(string) << endl;

}


//Destructor to release memory
Roster::~Roster(){}


void Roster::parsestring() {

	for (int i = 0; i < sizeof(studentData) / sizeof(string); i++) {
	
		string tmep_string;
		istringstream input_stream (studentData[i]);
		char delimit = ',';
		
		getline(input_stream, tmep_string, delimit);
	
		cout << tmep_string << endl;
		
		


		
		//cout << studentData[i] << endl;
	}
}



void Roster::rostertest(){
	//cout << "this was the roster test" << endl;

}