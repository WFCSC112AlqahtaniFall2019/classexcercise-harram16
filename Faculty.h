//
// Created by Addie Harrison on 10/3/19.
//
#include <iostream>
#include "Faculty.h"

using namespace std;

#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H


class Faculty {
public:
    Faculty();//default constructor
    Faculty(string n, string i, string add, string dob, string deg, double salary, double ssn);

    string name;
    string id;
    string address;
    string DoB;
    string degree;

//getter and setter for salary
    double getSalary() { return salary; }

    void setSalary(double salary);

/* 1) create a getter and setter for each variable in the class*/
    double getSSN() { return SSN; }

    void setSSN(double SSN);


private:
    double salary;
    double SSN;
};


#endif //CLASSEXCERCISE_FACULTY_H
