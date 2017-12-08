#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int aa,bb;
    cin >> aa >> bb;

    vector <vector <int> > s(aa,vector <int> ());
    int lastAnswer=0;
    for (int i=0;i<bb;i++) {
        int x,y,z;
        cin >> x >> y >> z;

        if (x==1) {
            s[(y^lastAnswer)%aa].push_back(z);
        }
        else {
            lastAnswer=s[(y^lastAnswer)%aa][z%s[(y^lastAnswer)%aa].size()];
            cout << lastAnswer << endl;
        }
    }   
    return 0;
}

