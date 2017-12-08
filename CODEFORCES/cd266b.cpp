#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	char tmp;
	int w, z;
	cin >> w >> z;
	cin >> str;
	for(int i=0; i < z; ++i){
		for(int j = 0; j < w - 1; ++j){
			if(str[j] == 'B' && str[j + 1] == 'G'){
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
				++j;
			}
		}
	}

	cout << str;

}