#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int digitSum(int num, int base){
    int sum = 0;

    while(num > 0){
        sum += num % base;
        num /= base;
    }

    return sum;
}
int main() {
    FASTIO

    int N;
    cin >> N;

    int maxDigitSum = 0;
    int bestBase = 0;

    for(int base = 2; base <= N; ++base){
        int currentDigitSum = digitSum(N,base);
        if(currentDigitSum > maxDigitSum){
            maxDigitSum = currentDigitSum;
            bestBase = base;
        }
    }

    cout << maxDigitSum << ' ' << bestBase;
    return 0;
}
