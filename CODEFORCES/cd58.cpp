#include <iostream>

using namespace std;

int main(){
	string s;
    cin >> s;

    int pos = 0,len;
    len = s.length();

    while (pos < len && s[pos] != 'h')
        ++pos;
    ++pos;
    while (pos < len && s[pos] != 'e')
        ++pos;
    ++pos;
    while (pos < len && s[pos] != 'l')
        ++pos;
    ++pos;
    while (pos < len && s[pos] != 'l')
        ++pos;
    ++pos;
    while (pos < len && s[pos] != 'o')
        ++pos;

    if (pos < len){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}