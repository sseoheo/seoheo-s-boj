#include <iostream>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int cnt[201];

int main() {
    FASTIO

    int N, v;
    cin >> N;

    for(int i = 0; i < N; i++){
        int nbr;
        cin >> nbr;
        cnt[nbr + 100]++;
    }
    
    cin >> v;
    cout << cnt[v + 100];
    
    return 0;
}