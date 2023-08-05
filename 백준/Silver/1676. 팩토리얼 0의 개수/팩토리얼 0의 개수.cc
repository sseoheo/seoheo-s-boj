#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, cnt = 0;
    cin >> N;
    
    for (int i = 5; i <= N; i *= 5) {
        cnt += (N / i);
    }

    cout << cnt;
}

