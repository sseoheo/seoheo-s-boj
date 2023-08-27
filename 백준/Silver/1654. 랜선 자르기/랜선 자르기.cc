#include <iostream>
#include <vector>
#include <algorithm>

#define INF 1'000'001
using namespace std;

int k, n;   // 랜선의 개수, 잘라서 만들 랜선의 개수
vector<int> lan; // k개의 랜선을 저장할 vector

void input(){
    cin >> k >> n;
    lan.assign(k, 0);   // vector 동적 할당

    for(int i = 0; i < k; i++){
        cin >> lan[i];
    }
}

// 매개변수를 mid로 전달한다.
// k개의 랜선을 길이 mid(len)으로 자른다.
bool isPossible(int len){
    // 아직 자르지 않았으므로 0으로 초기화
    int cnt = 0;

    // k개의 랜선을 확인하면서 길이 x로 잘랐을 때 총 몇 개의 랜선이 나오는지 계산한다.
    for(int i = 0; i < k; ++i){
        cnt += lan[i] / len;
    }

    // 랜선이 n개 이상 나온다면 true, 그렇지 않다면 false를 반환한다.
    if(cnt >= n)
        return true;
    else
        return false;
}

void solve(){
    // 랜선의 길이를 정렬하여 최대값을 구하기 쉽게 한다.
    sort(lan.begin(), lan.end());

    unsigned int left = 1, right = lan[lan.size() - 1];
    unsigned int result = 0;

    while(left <= right){
        // 매개변수 param은 검사 범위의 중간 값이다.
        unsigned int mid = (left + right) / 2;

        // n개 이상 만들 수 있다면, 자르는 길이를 더 늘려도 된다. -> mid를 올려도 된다.
        if(isPossible(mid)){
            result = max(result, mid);
            left = mid + 1;
        }
        // n개 이상 만들 수 없다면, 자르는 길이를 줄여야 한다. -> mid를 내려야 한다.
        else
            right = mid - 1;
    }
    cout << result;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    input();
    solve();

    return 0;
}