#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int Arr[1'000'001];

int main() {
    FASTIO

    int N;
    cin >> N;
    vector<int> A(N+1);
    vector<int> ans(N+1, -1);
    for(int i = 1; i <= N; i++)
        cin >> A[i];
    
    int idx = -1;
    for(int i = N; i >= 2; i--){
        ans[i] = idx;
        if(A[i-1] != A[i])
            idx = i;
    }
    ans[1] = idx;
    for(int i = 1; i <= N; i++){
        cout << ans[i] << " ";
    }
    return 0;
}