#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int inp[num], out[num];
	for(int i = 0; i < num; i++){
		cin >> inp[i];
		out[inp[i] - 1] = i + 1;
	}
	for(int i = 0; i < num; ++i){
		cout << out[i] << " ";
	}
}