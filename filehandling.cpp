//
// Created by ironwalrus on 7/5/20.
//

#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main(){
    string quoteOfTheDay = " Fuck my life man";
    ofstream writer("qotd.txt");

    if (!writer){
        cout << "Error Opening File" << endl;
        return -1;
    }
    else{
        writer << quoteOfTheDay << endl;
        writer.close();
    }

    ofstream writer2("qotd.txt", ios::app);
    if (!writer2){
        cout << "Error Opening File" << endl;
        return -1;
    }
    else{
        writer2 << "\n - Wooosh appended" << endl;
        writer2.close();
    }

    char letter;

    ifstream roder("qotd.txt");
    if (!roder){
        cout << "Error Opening File" << endl;
        return -1;
    }
    else{
        for (int i = 0; !roder.eof(); i++){
            roder.get(letter);
            cout << letter;
        }
        cout << endl;
        roder.close();
    }


    return 0;
}