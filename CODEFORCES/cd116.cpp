#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int number_of_cases, i = 0, a, b, max = 0, total, current = 0, temp_current = 0, temp_max = 0;
	cin >> number_of_cases;
	while(i < number_of_cases){
		cin >> a >> b;
		total = b - a;
		current += total;
		if(current > temp_max){
			temp_max = current;
		}
		i++;
	}
	cout << temp_max;
}