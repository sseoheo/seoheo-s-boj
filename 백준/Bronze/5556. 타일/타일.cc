#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int N, K, x, y, temp;
    cin >> N >> K;

    for(int i = 0; i < K; i++) {
        cin >> x >> y;

        if (x > (N + 1) / 2)
            x = N + 1 - x;
        if (y > (N + 1) / 2)
            y = N + 1 - y;
        if (x < y) {
            temp = x;
            x = y;
            y = temp;
        }
        
        if(y % 3 == 1)
            printf("1\n");
        if(y % 3 == 2)
            printf("2\n");
        if(y % 3 == 0)
            printf("3\n");
    }

    return 0;
}