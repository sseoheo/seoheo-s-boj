#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int N;  cin >> N;
    int DP[1010];

    DP[1] = 0;
    DP[2] = 1;
    DP[3] = 0;

    for (int i = 4; i <= N; ++i) {
        if (min(DP[i - 1], DP[i - 3]) == 1) {
            DP[i] = 0;
        }
        else {
            DP[i] = 1;
        }
    }

    if (DP[N] == 1) {
        cout << "SK" << endl;
    }
    else {
        cout << "CY" << endl;
    }

    return 0;
}
