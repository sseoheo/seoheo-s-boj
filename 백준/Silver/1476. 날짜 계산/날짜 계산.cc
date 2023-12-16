#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int E, S, M, year = 1;

    cin >> E >> S >> M;
    while(1){
        if((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 ==0){
            cout << year << '\n';
            break;
        }
        else
            year++;
    }

    return 0;
}

