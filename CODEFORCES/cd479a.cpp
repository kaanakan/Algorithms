#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a, b, c, x, y, ww, qq, rr;
	cin >> a >> b >> c;
	x = a + b*c;
	y = a*(b+c);
	ww = a * b * c;
	qq = (a+b) * c;
	rr = a+b+c;
	cout << max(rr,max(max(x,y),max(ww,qq)));


}