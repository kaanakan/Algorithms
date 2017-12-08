#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, arr[1000];
    cin >> x >> y;
    for (int i = 0; i < y; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + y);
    int least = arr[x-1] - arr[0];
    for (int i = 1; i <= y - x; ++i)
    {
        if (arr[i+x-1] - arr[i] < least)
        {
            least = arr[i+x-1] - arr[i];
        }
    }
    cout << least << endl;
    return 0;
}