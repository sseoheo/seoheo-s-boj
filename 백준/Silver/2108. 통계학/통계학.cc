#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int arr[500'001];
int cnt[8001]; // 정수의 절댓값 4000까지

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // 산술평균(소수점 첫째 자리 반올림), 중앙값, 최빈값(여러 개면 두 번째로 작은 값), 범위
    double ArithmeticMean, sum = 0;
    int Median, Mode, Range;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        cnt[arr[i] + 4000]++;
    }
    sort(arr,arr + n);

    // 최빈값(MODE) 구하기
    int flag, max = 0;
    for(int i = 0; i < 8001; i++){
        if(cnt[i] > max){
            max = cnt[i];
            flag = i;
        }
    }
    for(int i = flag + 1; i < 8001; i++){
        if(cnt[i] == max){
            flag = i;
            break;
        }
    }

    ArithmeticMean = round(sum/n);
    Mode = flag - 4000;

    cout << (int)ArithmeticMean << '\n' ;
    cout << arr[n/2] << '\n';
    cout << Mode << '\n';
    cout << arr[n-1] - arr[0];

    return 0;
}