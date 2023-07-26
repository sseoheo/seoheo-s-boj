#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    // 큐 선언
    queue<int>que;

    // 큐에 요소 추가하기
    for (int i = 1; i <= N; i++) {
        que.push(i);
    }

    while (que.size() > 1) {
        que.pop();
        que.push(que.front());
        que.pop();
    }

    cout << que.front();

    return 0;
}
