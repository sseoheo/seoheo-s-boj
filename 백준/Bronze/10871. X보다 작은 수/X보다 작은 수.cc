#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int num, X;
    cin >> num >> X;

    int val;
    for (int i = 0; i < num; i++) {
        cin >> val;
        if (val < X) {
            cout << val << " ";
        }
    }
    return 0;
}