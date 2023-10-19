#include <iostream>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int A, B, C;
    cin >> A >> B >> C;
    
    C %= 2;
    for(int i = 0; i < C; i++)
        A ^= B;

    cout << A;
    return 0;
}