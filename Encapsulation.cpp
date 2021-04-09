/**
In OOP, Encapsulation is defined as binding together the data and the functions that manipulates them.
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
If you want others to read or modify the value of a private member, you can provide public get and set methods.

Why Encapsulation?
1. It is considered good practice to declare your class attributes as private (as often as you can).
Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts.
2. Increased security of data
*/
// Encapsulation in C++
#include <bits/stdc++.h>
using namespace std;

class Employee{
    int salary;
public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

int main()
{
    Employee employee;
    employee.setSalary(35000);
    cout << "Salary = " << employee.getSalary() << endl;

    return 0;
}
