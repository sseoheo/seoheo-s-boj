#include <iostream>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int N;
long long Map[100001], Sum[100001], Ans = 0;
int main() {
    FASTIO

    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> Map[i];
        Sum[i] = Sum[i-1] + Map[i];
    }

    for(int i = 1; i < N; i++){
        Ans += (Sum[N] - Sum[i]) * Map[i];
    }

    cout << Ans;
    return 0;
}