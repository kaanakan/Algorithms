#include <iostream>
using namespace std;

int main(){
    long long n, x, tmp, sum = 0;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        sum += tmp;
    }
    cout << ((sum + n - 1 == x) ? "YES" : "NO");
}