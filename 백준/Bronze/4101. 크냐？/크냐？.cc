#include <iostream>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int nbr1, nbr2;

    while(1){
        cin >> nbr1 >> nbr2;
        if(nbr1 == 0 & nbr2 == 0)
            break;
        else{
            if(nbr1 > nbr2)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }
    return 0;
}