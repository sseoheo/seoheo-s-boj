#include <iostream>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int T, N;
    cin >> T;

    int Prob[80001] = {0, };
    for(int i = 1; i <= 80000; i++){
        if(i % 3 == 0 || i % 7 == 0)
            Prob[i] = Prob[i - 1] + i;
        else
            Prob[i] = Prob[i - 1];
    }

    while(T--) {
        cin >> N;

        cout << Prob[N] << '\n';
    }

    return 0;
}