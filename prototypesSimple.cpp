//
// Created by ironwalrus on 8/5/20.
//
#include <iostream>
using namespace std;
// This is the prototype
int volume(int length = 1, int width = 1, int height = 1);

int main(){
    cout << volume() << endl;
}
// This is where you define the function. Can be anywhere really

int volume(int length, int width, int height){
    return length*width*height;
}
