#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, M, Country[1001], Airp[10001];
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        for (int i = 0; i < M; i++) {
            cin >> Country[i] >> Airp[i];
        }
        cout << N - 1 << '\n';
    }
}
