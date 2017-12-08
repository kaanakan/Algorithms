#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

class StackNode{
    public:
        int value;
        int currentMax;
        StackNode(const int& x, const int& y) : value(x), currentMax(y) {}
};

int main() {
    std::stack<StackNode> stk;
    int n, qq, num, max = INT_MIN;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> qq;
        if(qq == 1){
            cin >> num;
            if(num > max) max = num;
            StackNode new_node(num,max);
            stk.push(new_node);
        }
        if(qq == 2){
            stk.pop();
            if(stk.empty())
                max = INT_MIN;
            else
                max = stk.top().currentMax;
        }
        if(qq == 3){
            cout << stk.top().currentMax << endl;
        }

    }
    return 0;
}
