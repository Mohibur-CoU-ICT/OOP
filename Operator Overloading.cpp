/**
Operator Overloading:
C++ also provide option to overload operators.
For example, we can make the operator (‘+’) for string class to concatenate two strings.
We know that this is the addition operator whose task is to add two operands.
So a single operator ‘+’ when placed between integer operands , adds them and
when placed between string operands, concatenates them.
*/
// Operator overloading in C++
#include <bits/stdc++.h>
using namespace std;

class Complex{
    int real, img;
public:
    Complex(int r=0, int i=0){
        real = r;
        img = i;
    }
    Complex operator + (Complex& obj){
        Complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    void print(){
        cout << real << " + i" << img << endl;
    }
};

int main()
{
    Complex c1(2, 5), c2(7, 3);
    Complex c3 = c1 + c2;
    c1.print();
    c2.print();
    c3.print();

    return 0;
}
