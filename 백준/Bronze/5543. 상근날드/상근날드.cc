#include <iostream>
#include <algorithm>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int burger[4], drink[3];

int main() {
    FASTIO

    for(int i = 0; i < 3; i++)
        cin >> burger[i];
    for(int i = 0; i < 2; i++)
        cin >> drink[i];

    sort(burger, burger + 3);
    sort(drink, drink + 2);

    cout << burger[0] + drink[0] - 50;
    return 0;
}