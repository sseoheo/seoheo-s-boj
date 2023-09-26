#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

long long A[1'000'001];

int main() {
    FASTIO

    int N, B, C;
    long long cnt = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> B >> C;

    for(int i = 0; i < N; i++){
        A[i] -= B;
        cnt ++;
        if(A[i] > 0){
            cnt += (A[i] / C);
            if(A[i] % C != 0)
                cnt ++;
        }
    }

    cout << cnt;

    return 0;
}