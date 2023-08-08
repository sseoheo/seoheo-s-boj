#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 0;
    stack<int> stack;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 0) {
            sum -= stack.top();
            stack.pop();
        }
            
        else {
            stack.push(a);
            sum += a;
        }
    }
    cout << sum;

    return 0;

}


