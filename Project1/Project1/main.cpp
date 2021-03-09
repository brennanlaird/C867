#include <iostream>

#include "Student.h"


using namespace std;

int main ()
{
	cout << "Scripting and Programming - Applications – C867" << endl;
	cout << "C++ version ??" << endl;
	cout << "Brennan Laird  " << " WGU ID: 001415733 \n" << endl;
	
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Brennan,Laird,blair10@wgu.edu,41,7,14,18,SOFTWARE" };

	
	
	
	
	

	Student testerstudent;

	testerstudent.student_test();
	
	//cout << "Hello meat bags, my major is:" << degree_test << endl;

	//cin.get();

	return(0);
}