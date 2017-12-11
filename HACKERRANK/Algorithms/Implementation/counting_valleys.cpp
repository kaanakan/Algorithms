#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string str;
   int low=0;
    int total=0;
    
    cin >> n >> str;
    for(int i=0;i<n;i++){
        if(str[i]=='D') { 
        	low--;
            if(!low) continue;
         }
        else if(str[i]=='U') 
        	low++; 
        if(low == 0) total++;
        
    }
    cout << total;
    return 0;
}
