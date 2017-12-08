#include <stack>
#include <string>
#include <iostream>

using namespace std;

string isBalanced(string s) {
    stack<char> stk;  
    
    for (int i = 0; i < s.size(); ++i) {
        switch (s[i]) {
            case '{':
            case '(':
            case '[':
                stk.push(s[i]);
                break;
            case '}':
                if (stk.empty() or stk.top() != '{') {
                    return "NO";
                }
                stk.pop();
                break;
            case ')':
                if (stk.empty() or stk.top() != '('){
                    return "NO";
                }
                stk.pop();
                break;
            case ']':
                if (stk.empty() or stk.top() != '[') {
                    return "NO";
                }
                stk.pop();
                break;
        }
    }
    if(stk.empty()) return "YES";
    return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}