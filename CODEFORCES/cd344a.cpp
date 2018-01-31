#include <iostream>
using namespace std;

int main(){
    int n, count = 1;
    int first,second, tmp = -1;
    string x;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        first = x[0] - '0';
        second = x[1] - '0';
        if(first == tmp){
            count++;
        }
        tmp = second;
    }
    cout << count ;
}
