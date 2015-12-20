//
//  Student.cpp
//  LinkedList
//
//  Created by Sid Gupta on 19/12/2015.
//  Copyright © 2015 Sid Gupta. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "Student.h"
using namespace std;

//constructors
Student::Student() {
    
    lastName = firstName = "";
    studentNumber = mark = 0;
    next = NULL;
}

Student::Student(string _lastName, string _firstName, int _studentNumber, int _mark) {
    
    lastName = _lastName;
    firstName = _firstName;
    studentNumber = _studentNumber;
    mark = _mark;
}

//methods
int Student::compareStudent(Student *student) {

    return lastName.compare(student -> lastName);
}

//get functions
string Student::getLastName() { return lastName; }

string Student::getFirstName() { return firstName; }

int Student::getStudentNumber() { return studentNumber; }

int Student::getMark() { return mark; }

//set functions
void Student::setLastName(string _lastName) { lastName = _lastName; }

void Student::setFirstName(string _firstName) { firstName = _firstName; }

void Student::setStudentNumber(int _studentNumber) { studentNumber = _studentNumber; }

void Student::setMark(int _mark) { mark = _mark; }












