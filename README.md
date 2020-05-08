## Memory Retention of a Goldfish

Focused particularly for Arduino later. Guide inspired by Buckeys, great guy! 

### Scope in C++

The `::` is used as a scope resolution mechanism in C++

```c++
int tuna = 69;

int main(){
    double tuna = 48;
    cout << ::tuna << endl;
}
``` 

### Prototypes in C++

It behaves the same way as those in C. All protos must be before main 

```c++

// This is the prototype
int volume(int length = 1, int width = 1, int height = 1);

int main(){
    cout << volume() << endl;
}

// This is where you define the function. Can be anywhere really
int volume(int length, int width, int height){
    return length*width*height;
}

```

### Classes (Seperated)

Like C, classes are separated between declarations (prototype) and definitions. You define it only in the `.cpp` file, but declare it in the `.h` file. (This sample has a deconstructor)

_***Header file (.h)***_

```c++
#ifndef LEARNINGCPLUSPLUS_SIMPLECLASS_H
#define LEARNINGCPLUSPLUS_SIMPLECLASS_H

class SimpleClass {
    // this is the constructor
public:
    SimpleClass();
    ~SimpleClass();
};

#endif //LEARNINGCPLUSPLUS_SIMPLECLASS_H
```

***Definition file (.cpp)***

```c++
// be sure to include the right headers/in-built libs

#include "SimpleClass.h"
#include <iostream>
using namespace std;

SimpleClass::SimpleClass() {
    cout << "Constructed Sample Class" << endl;
}

SimpleClass::~SimpleClass() {
    cout << "Deconstructed is a Go " << endl;
}
```

### Pointers and Arrow Member Selection Operator (`->`)

Basically like C as well. Example below shows a pointer to an object

```c++
Object wombat;
Object *pointerToWombat = &wombat;

// These 2 achieve the same thing....
wombat.triggerFunction();
pointerToWombat -> triggerFunction();

```

We also use arrows for addressing a specific instance of a class (Like python `self` of java/js `this`). Below is a sample constructor
```c++
Animal::Animal(int height, int weight, string name) {
    // refer to a specific instance of animal
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    // increment total num of Animals by 1
    Animal::numOfAnimals++;
}
```

And of course it allows passing by reference. Perform it exactly like you would in C

### Member Initialisers (*** NEW)

Ok this part here I have never actually seen before. It basically replaces the redundancy of having the arrow member operator. Pretty lit, and works with const

_***Header file (.h)***_
```c++
class SimpleClassTwo {

public:
    SimpleClassTwo(int a , int b);
    void print();

private:
    int regularVariable;
    const int constVariable;
};

```

_***Definition file (.cpp)***_
```c++
#include "SimpleClassTwo.h"
#include <iostream>

using namespace std;
SimpleClassTwo::SimpleClassTwo(int a, int b) : regularVariable(a), constVariable(b) {

}
void SimpleClassTwo::print() {
    cout << "Regular Var is " << regularVariable << " and Constant Var is " << constVariable << endl;
}
```
_***Main file (.cpp)***_
```c++
int main(){
    SimpleClassTwo sample (8, 47);
    sample.print();
}
```

### Friend
`friend` is a method type that will allow access to all private varibales of a class to a particular method. To use this, you need to declare it EXPLICITLY inside the class first. Please refer to `friendship.cpp` for the deeds

Also recall the following:
`public` - anyone can have access
`private` - only friend and the class itself
`protected` - subclasses and class itself


### Virtual Classes

Almost the same as Java's `abstract`. Please do refer to `virtualClasses.cpp` for the deeds. 

To force a virtual method to be implemented by subclasses, do the following inside the parent class:

```c++
virtual void someMethod() = 0; 
```

### Inheritance

Pretty straight forward, here's a snippet of `Dog` extending `Animal`:

```c++
class Dog : public Animal{
private:
    string sound = "woof";

public:
    // new Method in Dog Class
    void getSound(){cout << sound << endl;}

    // new constructor because of new method
    Dog(int height, int weight, string name, string sound);
    // default constructor that calls parent superclass's default constructor
    Dog() : Animal(){};

    void toString();
};
```


### Templates (Don't really see them in Arduino common libs but meh)

So the idea here is making your methods/classes more veratile to different type of inputs. Not really common practice for Arduino but huh here goes.

**_Sample with method_** (refer to `templateMethods.cpp` for more)

```c++
template <class someType>
someType addTogether(someType a, someType b){
    return a + b;
}

int main(){
    int x =7, y= 43, z;
    z = addTogether(x, y);
    // Now if I change the types, will still work great
    float a=7.7, b=4.56, c;
    c = addTogether(a,b);
}
```

**_Sample with Class_**

This part is quite extensive. The gist of it is to have similar behavior but for classes, and allows for specialisation based on variable type utilised. This is by far the weirdest thing in C++. Refer to `templateClasses.cpp`