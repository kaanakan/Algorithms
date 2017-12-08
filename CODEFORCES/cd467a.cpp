#include <iostream>

using namespace std;

int main(){
	int xx, x, y, count = 0;
	cin >> xx;
	for(int i = 0; i < xx; ++i){
		cin >> x >> y;
		if(y - x >= 2){
			count++;
		}
	}
	cout << count;
}