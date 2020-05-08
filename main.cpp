#include <iostream>
#include <vector>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    const double PI = 3.14159;
    char alpha = 'a';

    bool isReal = true;

    int myAge = 0;
    float wanker = 6.007;
    double otherNumber = 4534543543543534534;

    std::cout << "Other number is " << sizeof(otherNumber) << std::endl;
    std::cout << "Typecasting number 92 to char: " << (char)94<<std::endl;

    string numberGuessed;
    int intNumberGuessed;

    do{
        cout << "Guess the number: ";
        getline(cin, numberGuessed );
        intNumberGuessed = stoi(numberGuessed);
        cout << intNumberGuessed << endl;
    }

    while (intNumberGuessed != 4);

    cout << "you win!" << endl;
    return 0;
}
