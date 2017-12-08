#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    bool flag = true;
    for (size_t i = 1; i < str.length(); ++i)
    {
        if (str[i] >= 'a')
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        for (size_t i = 0; i < str.length(); ++i)
        {
            if (str[i] >= 'a')
            {
                str[i] -= ('a' - 'A');
            }
            else
            {
                str[i] += ('a' - 'A');
            }
        }
    }

    cout << str << endl;
    return 0;
}