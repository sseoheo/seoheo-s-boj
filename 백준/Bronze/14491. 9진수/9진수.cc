#include <iostream>
#include <cmath>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int a, sum = 0, cnt = 0;
    cin >> a;

    cin >> a;
    while(a){
        sum += (a % 9) * pow(10, cnt++);
        a /= 9;
    }
    cout <<sum << "\n";
    return 0;
}

