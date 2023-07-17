#include <iostream>

using namespace std;

int factorial(int a) {
	int res = 1;

	if (a == 0) 
		return 1;
	else {
		for (int i = 1; i <= a; i++)
			res *= i;
		return res;
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,k;

	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));

	return 0;
}