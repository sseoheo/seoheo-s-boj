#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    string N;
    cin >> N;

    int len = N.length(), digit[10] = {0, }, recycle = 0, max = -1;
    for(int i = 0; i < len; i++){
        digit[N[i] - '0']++;

        if(N[i] - '0' == 6 || N[i] - '0' == 9)
            recycle++;
    }
    digit[6]  = (recycle + 1) / 2;
    digit[9]  = (recycle + 1) / 2;

    for(int i = 0; i < 10; i++){
        if(max < digit[i])
            max = digit[i];
    }

    cout << max;

    return 0;
}

