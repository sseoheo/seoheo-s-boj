#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout << '*';
        }
        for(int k = i; k < N; k++){
            cout << ' ';
        }
        for(int k = i; k < N; k++){
            cout << ' ';
        }
        for(int j = 0; j < i; j++){
            cout << '*';
        }
        cout << "\n";
    }
    for(int i = 1; i <= N; i++){
        for(int j = N - i; j > 0; j--){
            cout << '*';
        }
        for(int k = N - i; k < N; k++){
            cout << ' ';
        }
        for(int k = N - i; k < N; k++){
            cout << ' ';
        }
        for(int j = N - i; j > 0; j--){
            cout << '*';
        }
        cout << "\n";
    }

    return 0;
}