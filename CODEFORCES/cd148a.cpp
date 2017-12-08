#include <iostream>
using namespace std;

int main(){
	int k,l,m,n,d, result;
	cin >> k >> l >> m >> n >> d;
	result = d;
	if(k == 1 || l == 1 || m == 1 || n == 1){
		cout << result;
	}
	else{
		for(int i = 1 ; i < d+1; ++i){
			if(i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0){
				result--;
			}
		}
		cout << result;
	}
}