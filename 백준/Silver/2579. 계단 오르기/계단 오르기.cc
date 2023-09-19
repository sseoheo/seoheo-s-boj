#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int N, Score = 0;
int Stair[301], DP[301];

void Input() {
    cin >> N;
    // DP의 가독성을 위해 1부터 넣어줌
    for(int i = 1; i <= N; i++){
        cin >> Stair[i];
    }
}

void Settings() {
    DP[1] = Stair[1];
    DP[2] = Stair[1] + Stair[2];
    DP[3] = max(Stair[1] + Stair[3], Stair[2] + Stair[3]);

    for(int i = 4; i<= N; i++){
        DP[i] = max(DP[i-2] + Stair[i], DP[i-3] + Stair[i-1] + Stair[i]);
    }
}

void Find_Answer() {
    cout << DP[N] << "\n";
}

int main() {
    FASTIO
    Input();
    Settings();
    Find_Answer();

    return 0;
}
