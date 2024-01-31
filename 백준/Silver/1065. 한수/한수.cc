#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int N;
    cin >> N;

    if(N < 100)
        cout << N;
    else if(N == 1000)
        cout << 144;

    else{
        int cnt = 99;
        int hundreds, tens, units;
        for(int i = 100; i <= N; i++){
            hundreds = i % 10;
            tens = (i / 10) % 10;
            units = (i / 100) % 10;

            if(units - tens == tens - hundreds)
                cnt++;
        }
        cout << cnt;
    }

    return 0;
}
