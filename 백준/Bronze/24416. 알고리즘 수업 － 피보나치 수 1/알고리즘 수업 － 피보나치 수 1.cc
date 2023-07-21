#include <iostream>
using namespace std;

// 코드1: 재귀 호출을 이용한 피보나치 수 구하는 함수
int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

// 코드2: 동적 프로그래밍을 이용한 피보나치 수 구하는 함수
int fibonacci(int n) {
    int f[41] = {0}; // 최대 n이 40이므로 크기가 41인 배열 선언
    f[1] = f[2] = 1;

    for (int i = 3; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];

    return f[n];
}

int main() {
    int n;
    cin >> n;

    // 코드1과 코드2의 실행 횟수 계산
    int count_code1 = fib(n);
    int count_code2 = n - 2;

    // 결과 출력
    cout << count_code1 << " " << count_code2 << endl;

    return 0;
}