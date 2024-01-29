#include <iostream>
#include <map>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

long long ans, card_nbr;
map<long long, int> card;

int main() {
    FASTIO

    int N, max_cnt = 0;
    cin >> N;

    while(N--){
        cin >> card_nbr;
        card[card_nbr]++;
    }

    for(auto m : card){
        if(m.second > max_cnt){
            max_cnt = m.second;
            ans = m.first;
        }
    }
    cout << ans;

    return 0;
}
