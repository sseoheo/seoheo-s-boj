#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string input;
    cin >> input;
    long long N = stoll(input); // 입력값을 long long 형으로 변환
    
    int digit = input.length(); // 문자열의 길이 (=입력값의 자릿수)
    long long start = N - digit * 9; // 가능한 최솟값인 'N - 9*(N의 자릿수)' 부터 시작
    
    for (long long i = start; i < N; i++) {
        long long num = i;
        long long sum = num;
        
        while (num > 0) {
            sum += num % 10; // 각 자릿수 더하기
            num /= 10;
        }
        
        if (sum == N) { // 생성자를 찾았을 경우
            cout << i << "\n";
            return 0;
        }
    }
    
    cout << 0 << "\n"; // 생성자가 없는 경우
    return 0;
}