#include <iostream>

using namespace std;

// 길이가 짝수이고, 앞의 절반의 합과 뒤의 절반의 합이 같은 부분 문자열
string S;
int temp = 0;

void check(int start, int end) {
    int sum_front = 0;
    int sum_back = 0;
    // 앞의 절반 합
    for (int k = start; k <= start + ((end + 1) / 2) - 1; k++) {
        sum_front += S[k];
    }
    // 뒤의 절반 합
    for (int k = start+(end + 1) / 2; k <= start + end; k++) {
        sum_back += S[k];
    }

    if (sum_front == sum_back) {
        temp = max(temp, end + 1);
    }

    return;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> S;
    for (int i = 0; i < S.size(); i++) {
        for (int j = 1;j+i < S.size(); j += 2) {
            check(i, j);
        }
    }

    cout << temp;


    return 0;
}