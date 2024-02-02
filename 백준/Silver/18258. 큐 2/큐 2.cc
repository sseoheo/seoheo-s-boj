#include <iostream>
#include <queue>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

queue<int> q;
int main() {
    FASTIO

    int N, X;
    cin >> N;

    while(N--){
        string s; cin >> s;
        if (s == "push")
        {
            cin >> X;
            q.push(X);
        }
        else if (s == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else cout << -1 << '\n';

        }
        else if (s == "size")
        {
            cout << q.size() << '\n';
        }
        else if (s == "empty")
        {
            cout << q.empty() << '\n';
        }
        else if (s == "front")
        {
            if (!q.empty()) cout << q.front() << '\n';
            else cout << -1 << '\n';
        }
        else // s == "back"
        {
            if (!q.empty()) cout << q.back() << '\n';
            else cout << -1 << '\n';
        }
    }

    return 0;
}
