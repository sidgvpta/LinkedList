//
//  Class.cpp
//  LinkedList
//
//  Created by Sid Gupta on 19/12/2015.
//  Copyright © 2015 Sid Gupta. All rights reserved.
//

#include <stdio.h>
#include "Class.h"
#include "Student.h"
#include <iostream>
using namespace std;

//constructor and destructor
Class::Class() {
    
    head = NULL;
    currentlyInClass = 0;
}

Class::~Class() {
    
    while (head) {
        Student *current;
        current = head -> next;
        delete head;
        head = current;
    }
}

//methods
void Class::addNewStudent(Student *newStudent) {

    if ((head == NULL) || (newStudent -> compareStudent(head) <= 0)) {
        
        newStudent -> next = head;
        head = newStudent;
        currentlyInClass++;
        return;
    }
        
    Student *current = head;
    while (current -> next && newStudent -> compareStudent(current -> next) > 0) {
        current = current -> next;
    }
    newStudent -> next = current -> next;
    current -> next = newStudent;
    
    currentlyInClass++;
}

void Class::searchAndPrint(int studentNumber) {
    
    Student *current = head;
    while (current -> next) {
        if (studentNumber == current -> getStudentNumber()) {
            cout << "Student Found. Details:" << endl;
            cout << current -> getStudentNumber() << "\t";
            cout << current -> getLastName() << "\t";
            cout << current -> getFirstName() << "\t";
            cout << current -> getMark() << endl << endl;
            return;
        }
        else current = current -> next;
    }
    if (studentNumber == current -> getStudentNumber()) {
        cout << "Student Found. Details:" << endl;
        cout << current -> getStudentNumber() << "\t";
        cout << current -> getLastName() << "\t";
        cout << current -> getFirstName() << "\t";
        cout << current -> getMark() << endl << endl;
        return;
    }
    else {
        cout << "INVALID STUDENT NUMBER" << endl;
    }
}

void Class::printAll() {
    
    Student *current = head;
    int i = 1;
    while (current -> next) {
        cout << i << ") ";
        cout << current -> getStudentNumber() << "\t";
        cout << current -> getLastName() << "\t";
        cout << current -> getFirstName() << "\t";
        cout << current -> getMark() << endl << endl;
        current = current -> next;
        i++;
    }
    cout << i << ") ";
    cout << current -> getStudentNumber() << "\t";
    cout << current -> getLastName() << "\t";
    cout << current -> getFirstName() << "\t";
    cout << current -> getMark() << endl << endl;
}

//get methods
int Class::getCurrentlyInClass() { return currentlyInClass; }

//set methods
void Class::setCurrentlyInClass(int _currentlyInClass) { currentlyInClass = _currentlyInClass; }