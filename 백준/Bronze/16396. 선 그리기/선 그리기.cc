#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

bool line[10001];

int main() {
    FASTIO

    int N, cnt = 0;

    cin >> N;
    while(N--){
        int X, Y;
        cin >> X >> Y;
        for(int i = X; i < Y; i++){
            line[i] = true;
        }
    }

    for(int i = 1; i < 10001; i++){
        if(line[i])
            cnt++;
    }

    cout << cnt;

    return 0;
}