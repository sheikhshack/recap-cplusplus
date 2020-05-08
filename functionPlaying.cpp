//
// Created by ironwalrus on 7/5/20.
//


#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int addNumbers (int firstNum, int secondNum = 0){
    int combinedVal = firstNum + secondNum;
    return combinedVal;
}

int addNumbers (int firstNum, int secondNum , int thirdNum){
    return firstNum + secondNum + thirdNum;
}


int main(){
    cout << addNumbers(1) << endl;
    cout << addNumbers(1,5,4) << endl;
    return 0;
}
