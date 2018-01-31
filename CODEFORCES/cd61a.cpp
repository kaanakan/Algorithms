#include <iostream>
using namespace std;

int main(){
    string _1, _2;
    cin >> _1 >> _2;
    for(int i = 0; i < _1.size(); ++i){
        if (_1[i] == _2[i]){
            _1[i] = '0';
        }
        else
        {
            _1[i] = '1';
        }
    }
    cout << _1;
}
