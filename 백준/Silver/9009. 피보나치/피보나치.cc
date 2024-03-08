#include <iostream>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int fibo[46] = {0, 1};

int main() {
    FASTIO

    for(int i = 2; i < 46; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> Use;
        for(int i = 45; i > 0; i--){
            if(fibo[i] <= n){
                n -= fibo[i];
                Use.push_back(fibo[i]);
            }
        }
        for(int i = Use.size() - 1; i >= 0; i--){
            cout << Use[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}

