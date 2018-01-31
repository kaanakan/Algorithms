#include <iostream>
using namespace std;

int main(){
    int n, m, x, y, tmp;
    cin >> n >> m;
    tmp = n;
    do{
        x = n / m;
        y = x + (n%m);
        n = y;
        tmp += x; 
    }while(y >= m);
    cout << tmp ;
}
