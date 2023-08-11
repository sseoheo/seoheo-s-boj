#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for(int i = n ; i > 0; i--){
        for ( int j = i ; j > 0; j --){
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
