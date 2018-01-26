#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(((x > y) ? y : x) % 2 == 0){
        cout << "Malvika";
    }
    else{
        cout << "Akshat";
    }
    return 0;
}
