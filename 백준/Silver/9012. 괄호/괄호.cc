#include <iostream>
#include <stack>
#include <string>
using namespace std;


bool Check(string str) {
    
    int len = (int)str.length();
    stack<char> st;

    for (int i = 0; i < len; i++) {
        char c = str[i];

        if (c == '(') {
            st.push(str[i]);
        }
        else {
            if (!st.empty()) {
                st.pop();
            }
            else
                return false;
        }
    }
    return st.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        if (Check(str)) {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }

    return 0;
}
