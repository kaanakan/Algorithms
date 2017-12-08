#include <iostream>
#include <string>
using namespace std;

int main (){
    string nop;
    cin >> nop;
    if(islower(nop[0])){
        nop[0] = toupper(nop[0]);
    }
    cout << nop;
}