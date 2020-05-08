//
// Created by ironwalrus on 8/5/20.
//

#include <iostream>

using namespace std;

template <class T>
class VersatileClass{
    T first, second;
public:
    VersatileClass(T a, T b){
        first = a;
        second = b;
    }
    T bigger();
};

template<>
class VersatileClass<char>{
public:
    VersatileClass(char x){
        cout << x << " this is a character specialisation class, handles characters only" << endl;
    }
};

template<class T>
T VersatileClass<T>::bigger() {
    return (first > second? first:second);
}


// Usage example. Make sure to define exactly what input ypu playing with first
int main(){
    VersatileClass<int> object1(23, 55);
    VersatileClass<double> object2(2.3, 5.5);
    };

