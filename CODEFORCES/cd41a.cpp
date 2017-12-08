#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int len;
	string a,b, c;
	cin >> a >> b;
	c = a;
	reverse(c.begin(), c.end());
	if(c.compare(b) == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}