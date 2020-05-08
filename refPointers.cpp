//
// Created by ironwalrus on 8/5/20.
//
#include <iostream>

using namespace std;

void makeMeYoung(int * age){
    cout << "I used to be " << *age << " With address " << age << " And pointer address" << &age << endl;
    *age -= 10;

}

int main(){
    int currentAge = 39;
    makeMeYoung(&currentAge);
    cout << currentAge <<endl;




}