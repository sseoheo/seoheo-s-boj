#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int n, m;
    int arr[101] = { 0, };
    int a, b, c;

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        for(int k = a; k <= b; k++) {
            arr[k] = c;
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}

