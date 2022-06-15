#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(inr no, char sName) {
  studentID = no;
  strcyp(name,sName);
  
}

// Display StudentId and Name
Student::display() {

  cout<< "Student ID Is:"<< studentID<<endl;
  cout<< "Student Name Is:"<<name<<endl;
  
}
