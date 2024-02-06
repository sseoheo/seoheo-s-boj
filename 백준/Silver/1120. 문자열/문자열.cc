#include <iostream>
#include <string>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    string A, B;
    cin >> A >> B;

    int diff_size = B.size() - A.size(), res = 50;

    for(int i = 0; i < diff_size + 1; i++){
        int cnt = 0;
        for(int j = 0; j < A.size(); j++){
            if(A[j] != B[i+j]){
                cnt++;
            }
        }
        res = min(cnt, res);
    }

    cout << res;

    return 0;
}
