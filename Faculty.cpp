//
// Created by Addie Harrison on 10/3/19.
//
#include <iostream>
#include "Faculty.h"

using namespace std;

#include "Faculty.h"

Faculty::Faculty(string n, string i, string add, string dob, string deg, double sal, double ssn) {
    name = n;
    id = i;
    address = add;
    DoB = dob;
    degree = deg;
    salary = sal;
    SSN = ssn;
}

void Faculty::setSalary(double s) {
    salary = s;
}

/* 2) implement each setter and getter */
void Faculty::setSSN(double t) {
    SSN = t;
}
