#include <iostream>

using namespace std;

int main(){
	int a,b,c, i;
	cin >> a >> b >> c;
	for(i = 1; i < c + 1; ++i){
		b -= i * a;
	}
	if(b < 0) {
		b = b * -1;
	}
	if(b >= 0){
		b = 0;
	}
	cout << b;
}