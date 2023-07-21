#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(pair<int, string>a, pair<int, string>b) {
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false);	cin.tie(NULL);
	
	int n;
	cin >> n;

	vector<pair<int, string>> v;
	v.resize(n); // 벡터 크기를 'n'으로 조정

	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	
	stable_sort(v.begin(), v.end(),compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
	return 0;
} 