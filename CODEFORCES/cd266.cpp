#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int size, i = 0, count = 0, j = 0;
	vector<char> array;
	string inp;
	char temp;
	cin >> size;
	cin >> inp;

	

	while (i < size){
		temp = inp[i];
		array.push_back(temp);
		while(j < size - i + 1){
			if(temp == inp[i + j + 1]) {
				count++;
				j++;
				continue;			
			}
			break;

	}
		i += j;
		j = 0;
		i++;
	}

	
	cout << size - array.size();
}
