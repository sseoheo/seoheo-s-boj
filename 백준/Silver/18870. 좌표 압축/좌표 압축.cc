#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int N;
    cin >> N;
    vector<int> X(N);
    // 원본 벡터 생성
    for(int i = 0; i < N; i++){
        cin >> X[i];
    }

    vector<int> CopyX(X); // 원본 벡터 복사
    sort(CopyX.begin(), CopyX.end()); // 오름차순 정렬
    //중복 제거
    CopyX.erase(unique(CopyX.begin(), CopyX.end()), CopyX.end());
    for(int i = 0; i < N; i++){
        // i번째 요소의 위치 비교값
        auto Value_i = lower_bound(CopyX.begin(), CopyX.end(), X[i]);

        cout << Value_i - CopyX.begin() << ' ';
    }
    return 0;
}