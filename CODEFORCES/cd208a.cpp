#include <iostream>
#include <string>
using namespace std;

int main(){
	int len, i;
	string str, res;
	cin >> str;
	len = str.size();
	for(i = 0; i < len; i++){
		if(str[i] == 'W'){
			if(str[i + 1] == 'U'){
				if(str[i + 2] == 'B'){
					if(i != 0){
						res += ' ';
					}
					i += 2;
				}
				else{
					res += str[i];
					res += str[i + 1];
					i++;
				}
			}
			else{
				res += str[i];
			}
		}
		else{
			res += str[i];
		}
	}
	cout << res;
}