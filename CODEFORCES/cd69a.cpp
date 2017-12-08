#include <iostream>

using namespace std;

int main(){
	int xx,sum_x,sum_y,sum_z,x,y,z;
	sum_z = sum_y = sum_x = 0;
	cin >> xx;
	for(int i = 0; i < xx; ++i){
		cin >> x >> y >> z;
		sum_x += x;
		sum_y += y;
		sum_z += z;
	}
	if(!sum_x && !sum_z && !sum_y){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}