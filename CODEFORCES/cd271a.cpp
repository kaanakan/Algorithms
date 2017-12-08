#include <iostream>
using namespace std;

int main(){
	int year, x,y,z,t;

	cin >> year;
	while(true){
		year += 1;
		x = year / 1000;
		y = (year / 100) % 10;
		z = (year / 10) % 10;
		t = year % 10;
		if(x != y && x != z && x != t && y != z && y != t && z != t){
			break;
		}
	}
	cout << year;

}