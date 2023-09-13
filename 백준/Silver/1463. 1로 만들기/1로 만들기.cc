#include <iostream>
#include <algorithm>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

using namespace std;

int DP[100'0000];

int main() {
    FASTIO

    int X;
    cin >> X;

    for(int i = 2; i <= X; i++){
        // 1을 빼는 경우
        DP[i] = DP[i - 1] + 1;

        // 2로 나누어지는 경우
        if(i % 2 == 0){
            DP[i] = min(DP[i], DP[i / 2] + 1);
        }

        // 3으로 나누어지는 경우
        if(i % 3 == 0){
            DP[i] = min(DP[i], DP[i / 3] + 1);
        }
    }

    cout << DP[X];

    return 0;
}