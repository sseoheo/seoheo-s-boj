#include <iostream>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int N, M, nbr, check_nbr;
    vector<int> card; vector<int> check;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> nbr;
        card.push_back(nbr);
    }
    sort(card.begin(),card.end());

    cin >> M;
    while(M--){
        cin >> check_nbr;
    cout << binary_search(card.begin(), card.end(), check_nbr) << ' ';
    }

    return 0;
}

