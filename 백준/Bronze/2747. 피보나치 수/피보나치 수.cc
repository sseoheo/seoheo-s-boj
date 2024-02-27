#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int fibonacci[46];

int main() {
    FASTIO

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i <= 45; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    
    int n; cin >> n;
    cout << fibonacci[n];

    return 0;
}