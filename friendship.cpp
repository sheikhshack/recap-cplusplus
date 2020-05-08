//
// Created by ironwalrus on 8/5/20.
//

#include <iostream>

using namespace std;

class Walrus {
public:
    Walrus() {walrusPrivateVar = 0;}
private:
    int walrusPrivateVar;
friend void friendOfWalrus (Walrus &walrusinstance);
};

void friendOfWalrus(Walrus &walrusinstance) {
    cout << walrusinstance.walrusPrivateVar << endl;
}

int main(){
    Walrus bob;
    friendOfWalrus(bob);
}
