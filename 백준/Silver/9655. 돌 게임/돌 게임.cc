#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int N;
    cin >> N;

    if(N % 2 == 1)
        cout << "SK";
    else
        cout << "CY";
    
    return 0;
}

