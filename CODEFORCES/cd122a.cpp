#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x % 4 == 0){
		cout << "YES";
		goto son;
	}
	if(x % 7 == 0){
		cout << "YES";
		goto son;
	}
	if(x == 47 || x == 74 || x == 444 || x == 447 || x == 477 || x == 744 || x == 747 || x == 777){
		cout << "YES";
		goto son;
	}
	cout << "NO";
	son:
		return 0;
}