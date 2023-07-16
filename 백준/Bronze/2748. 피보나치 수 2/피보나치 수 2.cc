#include <iostream>

using namespace std;

int main() {
	
	int n;
	unsigned long long Fibonacci[90] = {0};
	Fibonacci[1] = 1;

	cin >> n;

	
	for (int i = 2; i <= n; i++) {
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
	}
	
	cout << Fibonacci[n];

	return 0;
}