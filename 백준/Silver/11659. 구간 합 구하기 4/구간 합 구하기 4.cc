#include <iostream>

using namespace std;

int arr[100005];

int main() {
	ios_base::sync_with_stdio(false);	cin.tie(NULL);

	int  N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	int start, end;
	for (int i = 0; i < M; i++) {
		cin >> start >> end;

		cout << arr[end] - arr[start - 1] << '\n';
	}
	
	
	return 0;
} 