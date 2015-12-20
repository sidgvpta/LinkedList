//
//  Class.h
//  LinkedList
//
//  Created by Sid Gupta on 19/12/2015.
//  Copyright © 2015 Sid Gupta. All rights reserved.
//

#ifndef Class_h
#define Class_h

#include "Student.h"

class Class {
    
    private:
    //variables
    int currentlyInClass;
    
    //head pointer
    Student *head;
    
    public:
    //constructor and destructor
    Class();
    ~Class();
    
    //methods
    void addNewStudent(Student *newStudent);
    void searchAndPrint(int studentNumber);
    void printAll();
    
    //get methods
    int getCurrentlyInClass();
    
    //set methods
    void setCurrentlyInClass(int _currentlyInClass);
};

#endif /* Class_h */
