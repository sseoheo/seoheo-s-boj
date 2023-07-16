#include <iostream>

using namespace std;

/* D.P 풀이법

int getNum(int a, int b) {
	if (b == 1)
		return 1;
	if (a == 0)
		return b;
	return (getNum(a - 1, b) + getNum(a, b - 1));
}

int main() {
	
	int T, k, n; // T : test case, k :층 , n : 호
	
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << getNum(k, n) << '\n';
	}
	return 0;
}
*/

int main() {

	int num, sum = 0;
	cin >> num;

	int* k = new int[num];
	int* n = new int[num];
	int people[15][14] = { 0, };
	
	for (int i = 0; i < 14; i++) {
		people[0][i] = i + 1;
	}

	for (int i = 0; i < 14; i++) {
		for (int j = 0; j < 14; j++) {
			sum += people[i][j];
			people[i + 1][j] = sum;
		}
		sum = 0;
	}

	for (int i = 0; i < num; i++) {
		cin >> k[i];
		cin >> n[i];
	}

	for (int i = 0; i < num; i++) {
		cout << people[k[i]][n[i] - 1] << '\n';
	}
}