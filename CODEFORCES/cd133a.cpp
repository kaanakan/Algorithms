#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string nop;
    int len = 0;
    cin >> nop;
    len = nop.length();
    
    for(int i = 0; i < len; i++)
    {
        if(nop[i] == 'H' || nop[i] == 'Q' || nop[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}