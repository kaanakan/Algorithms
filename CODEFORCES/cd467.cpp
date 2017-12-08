#include <iostream>

using namespace std;

int main(){
	int num, x, y, i, count = 0;
	cin >> num;
	for(i = 0; i < num; ++i){
		cin >> x >> y;
		if(y - x >= 2){
			count++;
		}
	}
	cout << count;
}