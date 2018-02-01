#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    vector<int> home(n), away(n);
    for(int i = 0; i < n; ++i){
        cin >> home[i] >> away[i];
        for(int j = 0; j < i; ++j){
            if(home[i] == away[j])
                count++;
            if(away[i] == home[j])
                count++;
        }
    }
    cout << count;
}
