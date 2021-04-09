/**
Data abstraction refers to providing only essential information to the outside world and hiding their background details.
1) A class is abstract if it has at least one pure virtual function.
2) We can have pointers and references of abstract class type.
3) If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
4) An abstract class can have constructors.

Virtual Function in C++:
A virtual function a member function which is declared within a base class and is re-defined(Overriden) by a derived class.
When you refer to a derived class object using a pointer or a reference to the base class,
you can call a virtual function for that object and execute the derived class’s version of the function.

Pure Virtual Functions in C++:
A pure virtual function (or abstract function) in C++ is a virtual function for which we don’t have an implementation,
we only declare it. A pure virtual function is declared by assigning 0 in the declaration.
*/
// Abstraction in C++
#include <bits/stdc++.h>
using namespace std;

// Shape is an abstract class.
class Shape{
public:
    virtual int area(int a, int b) = 0; // pure virtual function
};

class Rectangle : public Shape{
public:
    int area(int a, int b){
        cout << "Area = " << a*b << endl;
    }
};

class Triangle : public Shape{
public:
    int area(int a, int b){
        cout << "Area = " << (a*b)/2 << endl;
    }
};

int main()
{
    // Shape shape; // Error occur because we can not create object of abstract class.
    Rectangle rectangle;
    rectangle.area(10, 20);
    Triangle triangle;
    triangle.area(10, 20);

    return 0;
}
