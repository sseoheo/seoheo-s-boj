#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int NumberGame(int N, int b){
    int res = 0;
    while(N){
        if(N % b == 0)
            res++;
        else
            break;
        N /= b;
    }
    return res;
}
int main() {
    FASTIO

    int T, N;
    cin >> T;

    while(T--){
        cin >> N;
        int ans = 0;
        for(int i = 2; i <= N; i++){
            ans += NumberGame(N,i);
        }
        cout << ans << '\n';
    }
    return 0;
}