#include <iostream>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int n;
    cin >> n;

    vector<pair<pair<int, int>,pair<int,string>>>name(n);

    for (int i = 0; i < n; i++) {
        cin >> name[i].second.second >> name[i].second.first >> name[i].first.second>>name[i].first.first;
    }
    sort(name.begin(), name.end());
    cout << name[n - 1].second.second << '\n' << name[0].second.second << '\n';



    return 0;
}

