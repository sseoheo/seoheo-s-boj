#include <iostream>
#include <map>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

map<int, bool> map1;

int main() {
    FASTIO

    int N, M, nbr;
    cin >> N >> M;

    for(int i = 0; i < N + M; i++) {
        cin >> nbr;
        if (map1[nbr] == true)
            map1.erase(nbr);
        else
            map1[nbr] = true;
    }
    cout << map1.size();

    return 0;
}
