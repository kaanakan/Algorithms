#include <iostream>
using namespace std;

int main()
{
    int n, tmp;
    cin >> n;
    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        a += tmp;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cin >> tmp;
        b += tmp;
    }

    for (int i = 0; i < n - 2; i++)
    {
        cin >> tmp;
        c += tmp;
    }

    cout << a - b << endl;
    cout << b - c << endl;
    return 0;
}
