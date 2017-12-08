#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string nop;
    int length = 0;
    cin >> nop;
    length = nop.length();
    
    for(int i = 0; i < length; i++)
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