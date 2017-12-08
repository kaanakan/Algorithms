#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int xx;
    cin >>xx;
    int *arr = new int[xx];
    long tot = 0, yy = 0, outputValue = 0;
    for(int k = 0; k < xx; k++){
    	cin >> *(arr + k);
    	 tot += arr[k];
    }
    sort(arr, arr + xx);
    while(outputValue <= tot / 2){
    	yy++;
        outputValue += arr[xx - yy];
    }
    cout << yy;
    return 0;
}