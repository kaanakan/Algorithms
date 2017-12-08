#include <iostream>
using namespace std;

int main(){
    int n, t, count = 0, tmp;
    cin >> n >> t;
    for(int i = 0; i < n && t > 0; i++){
        cin >> tmp;
        t -= 86400 - tmp;
        count++;
    }
    cout << count;
}