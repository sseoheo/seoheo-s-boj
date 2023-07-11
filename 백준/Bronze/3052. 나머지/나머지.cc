#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int nbr, arr[42] = {};

    for (int i = 0; i < 10; i++) {
        cin >> nbr;
        arr[nbr % 42]++;
    }

    int result = 0;
    
    for (int j = 0; j < 42; j++){
        if (arr[j] != 0) {
            result++;
        }
    }
    
    cout << result;
    
    return 0;
}