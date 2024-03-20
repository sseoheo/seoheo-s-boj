#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

string s;
string nums[11] = { "zero" ,"one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine" };
vector<pair<string ,int>> ans;

int main() {
    FASTIO
    int M, N;
    cin >> M >> N;

    for (int i = M; i <= N; i++)
    {
        if (i >= 10)
        {
            s = nums[i/10] + " " + nums[i%10];
            ans.push_back({ s,i });
        }
        else
        {
            s = nums[i % 10];
            ans.push_back({ s,i });
        }
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].second << " ";
        if (i % 10 == 9) cout << '\n';
    }

    return 0;
}
