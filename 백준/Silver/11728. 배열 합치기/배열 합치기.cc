#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<int> A;

int main() {
    FASTIO

    int sizeA, sizeB;
    cin >> sizeA >> sizeB;
    while(sizeA--){
        int nbrA; cin >> nbrA;
        A.push_back(nbrA);
    }
    while(sizeB--){
        int nbrB; cin >> nbrB;
        A.push_back(nbrB);
    }
    sort(A.begin(), A.end());

    for(int i = 0; i < A.size(); i++)
        cout << A[i] << ' ';

    return 0;
}

