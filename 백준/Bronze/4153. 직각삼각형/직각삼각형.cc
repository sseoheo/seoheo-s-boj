#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int a, b, c;

    while (true) {
        cin >> a >> b >> c;

        if (a == 0 and b == 0 and c == 0) {
            break;
        }

        else if ((c * c == a * a + b * b) || (b * b == a * a + c * c) || (a * a == c * c + b * b)) {
            cout << "right" << '\n';
        }
        else {
            cout << "wrong" << '\n';
        }
    }

    return 0;
}