//
// Created by ironwalrus on 8/5/20.
//

#include <string>
#include <fstream>
#include <iostream>

/**
 * It seems that in C++, you declare the prototypes first and then implement them OUTSIDE the class. What a fucking mess
 *
 * Please read about `virtual` (like abstract) to know more about how C++ handles polymorphism or use the link here:
 * https://www.youtube.com/watch?v=Rub-JsjMhWY&list=LLZTZylIJiXW5QcVkmvZW2rg&index=8&t=1985s @1:05:00
 */

using namespace std;

class Animal{

private:
    int height;
    int weight;
    string name;
    static int numOfAnimals;

    public:
        int getHeight(){
            return height;
        }
        void setHeight(int heightInput){
            height = heightInput;
        }

        int getWeight() const {
            return weight;
        }

        void setWeight(int weight) {
            Animal::weight = weight;
        }

        const string getName() const {
            return name;
        }

        void setName(const string name) {
            Animal::name = name;
        }

        // prototype method for setAll, defined here but method written below
        void setAll(int, int, string);

        // constructor
        Animal(int, int, string);

        // destructor
        ~ Animal();

        // overloaded constructor without inputs
        Animal();

        static int getNumOfAnimals(){
            return numOfAnimals;
        }

        void toString();

};

// setting  a static variable within a class
int Animal::numOfAnimals = 0;

// define method for method declared in the class (this example just for show)
void Animal::setAll(int height, int weight, string name) {
    // refer to a specific instance of animal
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
}

 Animal::Animal(int height, int weight, string name) {
    // refer to a specific instance of animal
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    // increment total num of Animals by 1
    Animal::numOfAnimals++;
}
// destructor
Animal::~Animal() {
    cout << "Animal " << this->name << " has been removed" << endl;
    Animal::numOfAnimals--;
}

// constructor without any params (default)
Animal::Animal(){
    Animal::numOfAnimals++;
}

void Animal::toString() {
    cout << this->name << " has height " << this->height << endl;
}

// INHERITANCE OF CLASSES

class Dog : public Animal{
private:
    string sound = "woof";

public:
    // new Method in Dog Class
    void getSound(){cout << sound << endl;}

    // new constructor because of new method
    Dog(int height, int weight, string name, string sound);
    // default construtor that calls parent superclass's deault constructor
    Dog() : Animal(){};

    void toString();
};

// defining an extended constructor
Dog::Dog(int height, int weight, string name, string bark):Animal(height, weight, name){
        this -> sound = bark;
    }

void Dog::toString() {
    cout << this->getName() << " has height " << this-> getHeight() << " and is a damn dog..." << endl;
};


int main(){
    // without constuctor
    Animal fred;
    fred.setHeight(23);
    fred.setName("Fred");
    fred.setWeight(12);
    fred.toString();

    //with constructor
    Animal tom (36, 50, "Tom");

    // New dog class
    Dog spot(38,85,"Spot", "Decoy!!!");
    spot.getSound();
    // Trying extended vs super methods
    spot.toString();
    spot.Animal::toString();

    cout << Animal::getNumOfAnimals() << endl;
};


