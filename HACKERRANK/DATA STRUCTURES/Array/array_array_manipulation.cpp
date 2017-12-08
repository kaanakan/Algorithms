#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int m;
    long tmp = 0, max = 0;
    cin >> n >> m;
    vector<long> arr(n+1,0);
    for(int a0 = 0; a0 < m; a0++){
        int a;
        int b;
        int k;
        cin >> a >> b >> k;
        arr[a] += k;
        if(b   < n ) arr[b + 1] -= k;
    }
    for(int i = 0; i < n; ++i){
        tmp += arr[i+1];
        if(tmp > max) max = tmp;
    }
    cout << max;
    return 0;
}
