/**
Function Overloading VS Function Overriding

1. Inheritance: Overriding of functions occurs when one class is inherited from another class.
                Overloading can occur without inheritance.
2. Function Signature: Overloaded functions must differ in function signature
    ie either number of parameters or type of parameters should differ.
    In overriding, function signatures must be same.
3. Scope of functions: Overridden functions are in different scopes;
                        whereas overloaded functions are in same scope.
4. Behavior of functions: Overriding is needed when derived class function has to do
    some added or different job than the base class function.
    Overloading is used to have same name functions which behave
    differently depending upon parameters passed to them.
*/
// Overriding in C++
#include <bits/stdc++.h>
using namespace std;

class Shape{
public:
    int area(int a, int b){
        cout << "This method is inside Shape class." << endl;
    }
};

class Rectangle : public Shape{
public:
    int area(int a, int b){
        cout << "Area = " << a*b << endl;
    }
};

class Triangle : public Shape{
public:
    double area(int a, int b){
        cout << "Area = " << (a*b)/2 << endl;
    }
};

int main()
{
    Shape shape;
    shape.area(10, 10);
    Rectangle rectangle;
    rectangle.area(10, 10);
    Triangle triangle;
    triangle.area(10, 10);

    return 0;
}
