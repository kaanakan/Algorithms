#include <iostream>
#include <set>

int main()
{
    int n, tmp, x, y;
    std::cin >> n;
    std::set<int> st;
    std::cin >> x;
    for(int i=0; i < x; ++i){
        std::cin >> tmp;
        st.insert(tmp);
    }
    std::cin >> y;
    for(int i=0; i < y; ++i){
        std::cin >> tmp;
        st.insert(tmp);
    }
    if(st.size() >= n)
        std::cout << "I become the guy.";
    else
        std::cout << "Oh, my keyboard!";
    return 0;
}
