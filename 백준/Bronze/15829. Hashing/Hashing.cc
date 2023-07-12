#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int L;
    string str_alp;
    int r = 26;
    long long M = 1234567891;
    long long hash_value = 0;

    cin >> L;
    cin >> str_alp;

    for (int i = 0; i < L; i++) {
        hash_value += (str_alp[i] - 96) * (long long) pow(31,i);
    }

    cout << hash_value;

    return 0;
}