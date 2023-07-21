#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>>v;

int main() {
	ios_base::sync_with_stdio(false);	cin.tie(NULL);

	
	int n, a, b;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	
	sort(v.begin(), v.end());

	
	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
	return 0;
} 