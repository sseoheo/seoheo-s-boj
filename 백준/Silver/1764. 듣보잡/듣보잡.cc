#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> nolistennoseeList;
map<string, int> namelist;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N + M; i++) {
        string name;
        cin >> name;
        namelist[name]++;
        if(namelist[name] > 1)
            nolistennoseeList.push_back(name);
    }

    sort(nolistennoseeList.begin(), nolistennoseeList.end());

    cout << nolistennoseeList.size() << '\n';
    for(int i = 0; i < nolistennoseeList.size(); i++)
        cout << nolistennoseeList[i] << '\n';

    return 0;
}