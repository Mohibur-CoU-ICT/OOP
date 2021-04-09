/**
Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
When a function name is overloaded with different jobs it is called Function Overloading.
In Function Overloading “Function” name should be the same and the arguments should be different.
Function overloading can be considered as an example of polymorphism feature in C++.

..........How  Function Overloading works?..........

Exact match:- (Function name and Parameter)

If a not exact match is found:-
    ->Char, Unsigned char, and short are promoted to an int.
    ->Float is promoted to double

If no match found:
    ->C++ tries to find a match through the standard conversion.

ELSE ERROR
*/
// Function overloading in C++
#include <bits/stdc++.h>
using namespace std;

class Math{
public:
    int sum(int a, int b){
        cout << "Sum inside two int" << endl;
        cout << "Sum = " << a+b << endl;
    }
    int sum(int a, int b, int c){
        cout << "Sum inside three int" << endl;
        cout << "Sum = " << a+b+c << endl;
    }
    double sum(double a, double b){
        cout << "Sum inside two double" << endl;
        cout << "Sum = " << a+b << endl;
    }
};

int main()
{
    Math obj;
    obj.sum(5, 10);
    obj.sum(5.0, 10.0);
    obj.sum(5, 10, 20);
    obj.sum(5.5, 10.5);

    return 0;
}
