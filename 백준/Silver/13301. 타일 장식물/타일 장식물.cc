#include<iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

long long tile[81];
int main() {
    FASTIO

    int n, length = 0;
    cin >> n;
    tile[1] = 1;

    for (int i = 2; i <= n+1; i++)
        tile[i] = tile[i - 1] + tile[i - 2];

    length = tile[n + 1] * 2 + tile[n] * 2;

    cout << length;
    return 0;
}
