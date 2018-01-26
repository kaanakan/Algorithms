#include <iostream>
using namespace std;

int main(){
    int inp;
    int qq = 0;
    cin >> inp;
    for(int i = 5; i > 0; i--){
        qq += inp / i;
        inp %= i;
    }
    cout << qq;
    return 0;
}
