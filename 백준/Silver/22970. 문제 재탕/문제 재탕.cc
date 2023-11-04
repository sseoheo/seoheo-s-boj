#include <iostream>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

/*
 * ✓ A[i]를 산의 정상으로 하는 가장 큰 산의 크기를 각각 구하면 됩니다.
✓ O(N^2)에 문제를 풀 수 있습니다.
✓ 사실 O(N)에도 문제를 풀 수 있습니다.
✓ A[i − 1] < A[i] < A[i + 1]이거나 A[i − 1] > A[i] > A[i + 1]이면
A[i]는 산의 끝점이 될 수 없습니다.
✓ 산의 끝점이 될 수 있는 지점을 모두 구한 뒤, 인접한 지점끼리의 거리를 구하면
✓ O(N)에 문제를 풀 수 있습니다.
 */
int N, A[5050], R;

int main() {
    FASTIO

    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> A[i];

    for(int i = 1; i <= N; i++){
        int l = i, r = i;
        while(l > 1 && A[l] >  A[l - 1]) l--;
        while(r < N && A[r] > A[r + 1]) r++;
        R = max(R, r-l+1);
    }

    cout << R;

    return 0;
}