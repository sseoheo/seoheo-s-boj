#include <iostream>

using namespace std;

int main() {
	
	int n;
	long long Fibonacci[91] = {};
	Fibonacci[1] = 1;

	cin >> n;
	
	for (int i = 2; i <= n; i++) {
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
	}
	
	cout << Fibonacci[n];

	return 0;
}