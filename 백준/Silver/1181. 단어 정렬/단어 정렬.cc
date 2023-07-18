#include <iostream>
#include <algorithm>

using namespace std;

int cmp(string a, string b) {
	// 길이가 같다면 사전 순
	if (a.length() == b.length()) {
		return a < b;
	}
	// 길이가 다르다면 짧은 순
	else {
		return a.length() < b.length();
	}
}

string word[20000] = {};

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}

	sort(word, word + n, cmp);

	for (int i = 0; i < n; i++) {
		if (word[i] == word[i - 1]) {
			continue;
		}
		cout << word[i] << '\n';
	}

	return 0;
}