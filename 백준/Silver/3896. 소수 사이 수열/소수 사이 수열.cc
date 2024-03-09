#include <iostream>
#include <cmath>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    FASTIO

    int T, k;
    cin >> T;
    while(T--){
        int length = 2;
        cin >> k;
        if(isPrime(k))
            cout << 0 << '\n';
        else{
            int left = k -1, right = k + 1;
            while(!isPrime(left)){
                length++;
                left--;
            }
            while(!isPrime(right)){
                length++;
                right++;
            }
            if(isPrime(left) && isPrime(right))
                cout << length << '\n';
        }
    }
    return 0;
}

