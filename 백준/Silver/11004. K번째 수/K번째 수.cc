#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<int> A;

int main() {
    FASTIO

    int N, K;
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        int nbr; cin >> nbr;
        A.push_back(nbr);
    }
    sort(A.begin(), A.end());

    cout << A[K-1];

    return 0;
}

