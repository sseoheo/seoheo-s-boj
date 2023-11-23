#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int N, M, K;
    cin >> N >> M >> K;

    vector<float>arr(N, 0.0);
    int person;
    float ability;

    for(int i = 0; i < M; i++){ //장르
        for(int j = 0; j < N; j++){ //참가자의 능력
            cin >> person >> ability;
            // 가장 높은 능력 저장
            // 사람 번호는 1번부터
            arr[person-1] = max(ability, arr[person - 1]);
        }
    }
    // 내림차순 정렬
    sort(arr.begin(), arr.end(), greater<float>());

    float ans = 0.0;
    for(int i = 0; i < K; i++){
        ans += arr[i];
    }
    // c++ 소수점 자리수 조절
    cout << fixed;
    cout.precision(1);
    cout << ans << '\n';

    return 0;
}
