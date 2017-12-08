#include <iostream>

using namespace std;

int main(){
	int x,y,z;
	cin >> x >> y >> z;
	for(int i = 1; i < z + 1; ++i){
		y -= i * x;
	}
	if(y < 0) {
		y = y * -1;
	}
	else if(y >= 0){
		y = 0;
	}
	cout << y;
}