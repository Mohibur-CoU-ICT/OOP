/**
The capability of a class to derive properties and characteristics from another class is called Inheritance.
Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.
Super Class: The class whose properties are inherited by sub class is called Base Class or Super class.

..........Modes of Inheritance:..........

Public mode:
    public members of the base class    ->  public in the derived class
    protected members of the base class ->  protected in derived class
    private members of the base class   ->  private in derived class

Protected mode:
    public member of the base class     ->  protected in derived class
    protected members of the base class ->  protected in derived class
    private members of the base class   ->  not inherited

Private mode:
    public member of the base class     ->  private in derived class
    protected members of the base class ->  private in derived class
    private members of the base class   ->  not inherited
*/
// Inheritance in C++
#include <bits/stdc++.h>
using namespace std;

class A{
public:
    int x;
    void getter(){
        cout << x << ' ' << y << ' ' << z << endl;
    }
    void setter(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
protected:
    int y;
private:
    int z;
};

class B : public A{
    // x is public
    // y is protected
    // z is not private
};

class C : protected A{
    // x is protected
    // y is protected
    // z is not accessible / inherited
    int zc;
public:
    void getter(){
        cout << x << ' ' << y << ' ' << zc << endl;
    }
    void setter(int a, int b, int c){
        x = a;
        y = b;
        zc = c;
    }
};

class D : private A{
    // x is private
    // y is private
    // z is not accessible / inherited
    int zd;
public:
    void getter(){
        cout << x << ' ' << y << ' ' << zd << endl;
    }
    void setter(int a, int b, int c){
        x = a;
        y = b;
        zd = c;
    }
};

int main()
{
    A a;
    a.setter(5, 10, 15);
    a.getter();
    B b;
    b.setter(7, 14, 21);
    b.getter();
    C c;
    c.setter(11, 22, 33);
    c.getter();
    D d;
    d.setter(13, 26, 39);
    d.getter();

    return 0;
}
