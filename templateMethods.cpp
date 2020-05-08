//
// Created by ironwalrus on 8/5/20.
//
#include <iostream>
using namespace std;

template <class someType>
someType addTogether(someType a, someType b){
    return a + b;
}
// For having multiple params of different type
template <class someShit1, class someShit2>
someShit1 comparator(someShit1 a, someShit2 b){
    return (a < b? a:b);
}

int main(){
    int x =7, y= 43, z;
    z = addTogether(x, y);
    // Now if I change the types, will still work great
    float a=7.7, b=4.56, c;
    c = addTogether(a,b);
}