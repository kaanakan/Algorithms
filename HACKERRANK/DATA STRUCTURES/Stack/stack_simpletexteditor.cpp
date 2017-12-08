#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int qq;
    string S = "";
    stack<string> stk;
    cin >> qq;
    while(qq--){
        int x;
        cin >> x;
        if(x == 1){
            string tmp;
            cin >> tmp;
            stk.push(S);
            S += tmp;
        }
        else if(x == 2){
            int y;
            cin >> y;
            stk.push(S);
            S.erase(S.size() - y);
        }
        else if(x == 3){
            int z;
            cin >> z;
            cout << S[z - 1] << endl;
        }
        else{
            S = stk.top();
            stk.pop();
        }
    }
    return 0;
}
