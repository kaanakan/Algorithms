#include <iostream>
#include <vector>
using namespace std;

int main(){
	int num,tmp, max = 0, count = 1;
	vector<int> arr;
	cin >> num;
	for(int i = 0; i < num; ++i){
		cin >> tmp;
		arr.push_back(tmp);
	}
	for(int i = 0; i < num - 1; i++){
		if(count > max){
				max = count;
			}
		if(arr[i + 1] < arr[i]){
			count = 1;
		}
		else{
			count++;
		}
	}
	if(count > max){
				max = count;
			}
	cout << max;
}