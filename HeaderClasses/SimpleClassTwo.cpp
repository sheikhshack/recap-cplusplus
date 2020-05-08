//
// Created by ironwalrus on 8/5/20.
//

#include "SimpleClassTwo.h"
#include <iostream>

using namespace std;


SimpleClassTwo::SimpleClassTwo(int a, int b) : regularVariable(a), constVariable(b) {

}

void SimpleClassTwo::print() {
    cout << "Regular Var is " << regularVariable << " and Constant Var is " << constVariable << endl;
}