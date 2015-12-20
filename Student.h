//
//  Student.h
//  LinkedList
//
//  Created by Sid Gupta on 19/12/2015.
//  Copyright © 2015 Sid Gupta. All rights reserved.
//

#ifndef Student_h
#define Student_h

#include <string>
using namespace std;

class Student {
    
    private:
    //variables
    string lastName, firstName;
    int studentNumber, mark;
    
    public:
    //next pointer
    Student *next;
    
    //constructors
    Student();
    Student(string _lastName, string _firstName, int _studentNumber, int _mark);
    
    //methods
    int compareStudent(Student *student);
    
    //get methods
    string getLastName();
    string getFirstName();
    int getStudentNumber();
    int getMark();
    
    //set methods
    void setLastName(string _lastName);
    void setFirstName(string _firstName);
    void setStudentNumber(int _studentNumber);
    void setMark(int _mark);
};

#endif /* Student_h */
