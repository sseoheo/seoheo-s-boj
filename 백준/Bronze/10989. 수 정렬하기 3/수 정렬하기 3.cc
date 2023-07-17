#include <iostream>

using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int idx, arr[10001] = {};
	for (int i = 1; i <= n; i++) {
		cin >> idx;
		arr[idx] += 1;
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 1; j <= arr[i]; j++) {
			cout << i << '\n';
		}
	}

	return 0;
}