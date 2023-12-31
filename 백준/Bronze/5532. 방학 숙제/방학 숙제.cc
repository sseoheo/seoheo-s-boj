#include <iostream>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int L, A, B, C, D, cnt1, cnt2;
    cin >> L >> A >> B >> C >> D;

    cnt1 = L - (A / C);
    if (A % C)
        cnt1--;
    
    cnt2 = L - (B / D);
    if(B % D)
        cnt2--;
    
    cout << min(cnt1, cnt2) << '\n';
    return 0;
}

