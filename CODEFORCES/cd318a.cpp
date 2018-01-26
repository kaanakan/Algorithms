#include <iostream>

int main()
{
    long long x, y;
    std::cin >> x >> y;
    if (y <= (x + 1) / 2)
        std::cout << y * 2 - 1;
    
    else
        std::cout << (y - (x + 1) / 2) * 2;
    return 0;
}
