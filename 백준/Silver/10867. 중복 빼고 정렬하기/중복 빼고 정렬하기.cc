#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<int> Arr;

int main() {
    FASTIO

    int N;
    cin >> N;

    while(N--){
        int nbr;
        cin >> nbr;
        Arr.push_back(nbr);
    }

    sort(Arr.begin(), Arr.end());
    Arr.erase(unique(Arr.begin(),Arr.end()), Arr.end());
    for(int i = 0; i < Arr.size(); i++)
        cout << Arr[i] << ' ';

    return 0;
}

