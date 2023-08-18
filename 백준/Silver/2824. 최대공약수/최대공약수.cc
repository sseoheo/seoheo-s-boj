#include <iostream>
#include <numeric>
using namespace std;

// N개의 수를 모두 곱하면 A, M개의 수를 모두 곱하면 B가 된다.

long long GCD(long long a, long long b) {
    if (a > b){
        long long tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    long long a[1001], b[1001];
    long long ans = 1;
    bool isBigger = false;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long gc = GCD(a[i], b[j]);
            ans *= gc;
            if (ans >= 1'000'000'000) {
                isBigger = true;
                ans %= 1'000'000'000;
            }
            a[i] /= gc;
            b[j] /= gc;
        }
    }

    if (isBigger) // 나머지 값의 앞부분이 0이 나올 수 있으니 9자리수를 맞춰줘야함
        printf("%09lld\n", ans);
    else
        cout << ans << endl;
    return 0;
}
