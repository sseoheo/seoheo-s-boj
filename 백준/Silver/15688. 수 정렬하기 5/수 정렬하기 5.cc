#include <iostream>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<int> arr;

int main() {
    FASTIO

    int N; cin >> N;
    for(int i = 0; i < N; i++){
        int nbr; cin >> nbr;
        arr.push_back(nbr);
    }
    sort(arr.begin(),arr.end());

    for(int i = 0; i < N; i++){
        cout << arr[i] << '\n';
    }

    return 0;
}
