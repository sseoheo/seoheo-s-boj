#include <iostream>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

long long A, B;

long long gcd(long long a, long long b){
    long long r;
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long LCM(long long a, long long b){
    return (a * b) / gcd(a, b);
}

int main() {

    cin >> A >> B;

    cout << LCM(A, B);;
    return 0;
}