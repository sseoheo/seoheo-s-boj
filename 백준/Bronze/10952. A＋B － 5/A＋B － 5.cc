#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int a, b;

    while (true) {
        cin >> a >> b;
        if (a != 0 and b != 0) {
            cout << a + b << "\n";
        }
        else
            break;
    }

    return 0;
}