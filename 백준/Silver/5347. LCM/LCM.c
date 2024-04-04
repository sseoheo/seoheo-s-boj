#include<stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
long long LCM(long long a, long long b){
    return a * b / gcd(a, b);
}

int main() {

    int N, a, b;
    scanf("%d", &N);

    while(N--){
        scanf("%d%d", &a, &b);
        printf("%lld\n", LCM(a, b));
    }

    return 0;
}
