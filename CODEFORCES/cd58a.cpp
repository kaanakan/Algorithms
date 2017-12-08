#include <iostream>

using namespace std;

int main(){
	string s;
    cin >> s;

    int xx = 0,sz;
    sz = s.length();

    while (xx < sz && s[xx] != 'h')
        ++xx;
    ++xx;
    while (xx < sz && s[xx] != 'e')
        ++xx;
    ++xx;
    while (xx < sz && s[xx] != 'l')
        ++xx;
    ++xx;
    while (xx < sz && s[xx] != 'l')
        ++xx;
    ++xx;
    while (xx < sz && s[xx] != 'o')
        ++xx;

    if (xx < sz){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}