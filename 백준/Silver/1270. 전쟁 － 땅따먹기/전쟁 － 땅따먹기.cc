#include <iostream>
#include <string>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
#define ll long long
using namespace std;


int main() {
    FASTIO

    int N, Ground;
    map<ll, int> War;
    ll UnitNbr, lagerForce = 0, DominateFore = -1;

    cin >> N;
    while(N--){
        cin >> Ground;
        for(int i = 0; i < Ground; i++){
            cin >> UnitNbr;
            War[UnitNbr]++ ;

            if(War[UnitNbr] > lagerForce){
                lagerForce = War[UnitNbr];
                DominateFore = UnitNbr;
            }
        }

        int HalfG = Ground/2;
        if(War[DominateFore] > HalfG)
            cout << DominateFore << "\n";
        else
            cout << "SYJKGW" <<"\n";

        // 초기화!!!
        War.clear();
        lagerForce = 0;
        DominateFore = -1;
    }

    return 0;
}