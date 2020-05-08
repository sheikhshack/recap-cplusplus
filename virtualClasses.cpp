//
// Created by ironwalrus on 8/5/20.
//
#include <iostream>

using namespace std;


// Virtual method = Abstract methods in JAVA
class Animal{
public:
    virtual void makeSound() {cout << "The Animal says GRRR" << endl;}
};

class Dog : public Animal{
public:
    void makeSound() {cout << "The Dog says WOOF" << endl;}
};

class Cat : public Animal{
public:
    void makeSound() {cout << "The Cat says MEOOOOWWW" << endl;}
};

class Car{
public:
    virtual int getNumberOfWheels() = 0;
    virtual int getNumberOfDoors() = 0;
};

class Volkswagen : public Car{
public:
    // Overrrides the abstract methods
    int getNumberOfWheels(){cout << "Volkswagen has 4 wheels" << endl;};
    int getNumberOfDoors(){cout << "Volkswagen has 2 doors" << endl;};
};

int main(){
    Animal* pCat = new Cat;
    Animal* pDog = new Dog;

    pCat -> makeSound();
    pDog -> makeSound();
}

