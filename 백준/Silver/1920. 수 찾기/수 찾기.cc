#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 이분 탐색 함수
bool binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // 배열 정렬
    sort(arr.begin(), arr.end());

    cin >> M;
    for (int i = 0; i < M; ++i) {
        int target;
        cin >> target;

        // 이분 탐색을 통해 target 값이 배열 arr에 존재하는지 확인
        bool found = binarySearch(arr, target);

        if (found) {
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }
    }

    return 0;
}
