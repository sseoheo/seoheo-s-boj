#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main() {
    FASTIO

    int N, K;
    cin >> N >> K;

    int pascal_arr[N][K];

    for(int i = 0; i < N; i++)
        pascal_arr[i][0] = 1;

    for(int i = 1; i < N; i++){
        for(int j = 1; j <= i; j++){
            if(j >= K)
                continue;
            pascal_arr[i][j] = pascal_arr[i-1][j-1];

            if(i-1 >= j)
                pascal_arr[i][j] += pascal_arr[i-1][j];
        }
    }

    cout << pascal_arr[N-1][K-1];

    return 0;
}
