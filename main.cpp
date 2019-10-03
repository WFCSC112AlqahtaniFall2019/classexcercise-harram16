#include <iostream>
#include "Faculty.h"
using namespace std;

int main() {
    Faculty prof("Bob Turner", "6511013", "232 Deacon Place, Rd, Winston Salem, NC", "October 13, 2019", "Applied Math",
                 40, 84272);


/* 3) use the implemented methods to fill prof' info and print them out */
    cout << prof.name << endl;
    cout << prof.id << endl;
    cout << prof.address << endl;
    cout << prof.degree << endl;
    cout << prof.DoB << endl;
    cout << "Salary: " << prof.getSalary() << endl;
    cout << "SSN: " << prof.getSSN() << endl;

    return 0;
}
