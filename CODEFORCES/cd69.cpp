#include <iostream>

using namespace std;

int main(){
	int num,sum_x,sum_y,sum_z,a,b,c, i;
	sum_z = sum_y = sum_x = 0;
	cin >> num;
	for(i = 0; i < num; ++i){
		cin >> a >> b >> c;
		sum_x += a;
		sum_y += b;
		sum_z += c;
	}
	if(!sum_x && !sum_z && !sum_y){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}