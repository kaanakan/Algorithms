#include <bits/stdc++.h>

using namespace std;

long largestRectangle(vector <int> h) {
    stack<int> stk;
    int maxA = INT_MIN;
    h.push_back(0);
    for(int i = 0; i < h.size(); ++i){
        int qq = 0;
        while(!stk.empty() and stk.top() > h[i]){
            qq++;
            maxA = max(maxA, qq * stk.top());
            stk.pop();
        }
        for(int j = 0; j <= qq; ++j)
            stk.push(h[i]);
    }
    return maxA;
}

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for(int h_i = 0; h_i < n; h_i++){
       cin >> h[h_i];
    }
    long result = largestRectangle(h);
    cout << result << endl;
    return 0;
}
