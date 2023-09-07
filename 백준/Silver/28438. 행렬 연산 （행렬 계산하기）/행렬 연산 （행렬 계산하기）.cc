#include <iostream>

using namespace std;

int row[500002], col[500002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, Q;
    cin >> N >> M >> Q;

    while(Q--){
        int Operation, Boundary, SumNbr;
        cin >> Operation >> Boundary >> SumNbr;
        if(Operation == 1)
            row[Boundary] += SumNbr;
        else
            col[Boundary] += SumNbr;

    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cout << row[i] + col[j] << " ";
        }
        cout << '\n';
    }

    return 0;
}