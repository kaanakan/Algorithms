#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    stack<int> first,second;
    int num, qq, tmp;
    cin >> num;
    while(num--){
        cin >> qq;
        if(qq == 1){
            cin >> tmp;
            first.push(tmp);
        }
        else{
            if(second.empty()){
                while(!first.empty()){
                    second.push(first.top());
                    first.pop();
                }
            }
            if(!second.empty()){
                if(qq == 2){
                    second.pop();
                }
                if(qq == 3){
                    cout << second.top() << endl;
                }
            }
        }
    }
    return 0;
}