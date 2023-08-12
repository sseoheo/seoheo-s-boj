#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    string catalog, name;
    cin >> t;

    for (int i = 0; i < t; i ++){
        cin >> n;
        map<string, int >map1;
        for (int j = 0; j < n; j++){
            cin >> catalog >> name;
            map1[name]++;
        }
        int ans = 1;
        for (auto iter = map1.begin(); iter != map1.end(); iter++)
            ans *= (iter->second + 1);

        cout << ans-1 << '\n';
    }

    return 0;
}
