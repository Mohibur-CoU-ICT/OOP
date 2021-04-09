/**
Polymorphism means "many forms", and it occurs when we have
many classes that are related to each other by inheritance.
*/
// Polymorphism in C++
#include <bits/stdc++.h>
using namespace std;

class Animal{
public:
    void animalSound(){
        cout << "The animal makes a sound." << endl;
    }
};

class Dog : public Animal{
public:
    void animalSound(){
        cout << "The dog say: bow wow." << endl;
    }
};

class Cat : public Animal{
public:
    void animalSound(){
        cout << "The cat says: mew mew." << endl;
    }
};

int main()
{
    Animal animal;
    animal.animalSound();
    Dog dog;
    dog.animalSound();
    Cat cat;
    cat.animalSound();

    return 0;
}
