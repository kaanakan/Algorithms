#include <bits/stdc++.h>

using namespace std;

/*vector <int> leftRotation(vector <int> arr, int d) {

}*/

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    d = d %n;
    for(int i = d; i < n; ++i){
        cout << a[i] << " ";
    }
    for(int i = 0; i < d; ++i){
        cout << a[i] << " ";
    }
    /*vector <int> result = leftRotation(a, d%n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }*/
    cout << endl;


    return 0;
}
