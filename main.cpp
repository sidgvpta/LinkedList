//
//  main.cpp
//  LinkedList
//
//  Created by Sid Gupta on 19/12/2015.
//  Copyright © 2015 Sid Gupta. All rights reserved.
//

#include <iostream>
#include <string>
#include "Student.h"
#include "Class.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    string _lastName, _firstName;
    int numberOfStudents, _studentNumber, _mark, searchStudent;
    Class x;
    
    cout << "Total number of students: ";
    cin >> numberOfStudents;
    cout << endl;
    
    for (int i = 1; i <= numberOfStudents; i++) {
        cout << "STUDENT #" << i << endl;
        cout << "Surname: ";
        cin >> _lastName;
        cout << "Forename: ";
        cin >> _firstName;
        cout << "Student #: ";
        cin >> _studentNumber;
        cout << "Grade: ";
        cin >> _mark;
        cout << endl;
        
        Student *newStudent = new Student;
        newStudent -> setLastName(_lastName);
        newStudent -> setFirstName(_firstName);
        newStudent -> setStudentNumber(_studentNumber);
        newStudent -> setMark(_mark);
        x.addNewStudent(newStudent);
    }
    
    x.printAll();
    cout << "Enter ID of student: ";
    cin >> searchStudent;
    x.searchAndPrint(searchStudent);

    return 0;
}
