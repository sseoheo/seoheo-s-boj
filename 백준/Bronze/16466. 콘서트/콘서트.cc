#include <iostream>
#include <vector>
#include <algorithm>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

vector<int> ticket;

int main() {
    FASTIO

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int nbr;
        cin >> nbr;
        ticket.push_back(nbr);
    }

    sort(ticket.begin(), ticket.end());

    int minNbr = 1;
    for(int i = 0; i < N; i++){
        if(minNbr != ticket[i])
            break;
        for(int j = i + 1; j < N; j++){
            if(ticket[i] == ticket[j])
                i = j;
            else
                break;
        }
        minNbr++;
    }

    cout << minNbr;

    return 0;
}