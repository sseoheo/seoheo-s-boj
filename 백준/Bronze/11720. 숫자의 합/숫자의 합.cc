#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n,sum;
    string m;
    cin >> n >> m;
    sum = 0;

    for (int i = 0; i < m.length(); i++) {
        sum += m[i] - 48;
    }

    cout << sum;

    return 0;
}