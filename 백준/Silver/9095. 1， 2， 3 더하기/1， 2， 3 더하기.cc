#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int T, n;
int DP[11];

void Input() {
    cin >> T;
}

void Settings() {
    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;
    for(int i = 4; i < 11; i++){
       DP[i] = DP[i-1] + DP[i-2] + DP[i-3];
    }
}

void Find_Answer() {
    for(int i = 0; i < T; i++){
        cin >> n;
        cout << DP[n] << "\n";
    }

}

int main() {
    FASTIO
    Input();
    Settings();
    Find_Answer();

    return 0;
}