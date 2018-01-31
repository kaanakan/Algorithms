#include <iostream>
using namespace std;

int main(){
    int n, tmp;
    int _min = 101, _max = -1, _mai = 0, _mii = 0;
    cin >> n;
    for(int i=0; i < n; ++i){
        cin >> tmp;
        if(tmp > _max){
            _max = tmp;
            _mai = i;
        }
        if(tmp <= _min){
            _min = tmp;
            _mii = i;
        }
    }
    cout << _mai + (n - 1 - _mii) + ((_mai > _mii) ? -1 : 0);
}
