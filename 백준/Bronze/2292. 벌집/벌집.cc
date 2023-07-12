#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N, cnt = 2, i = 1;

    cin >> N;
    if (N == 1)
        cout << '1';

    else {
        while(N >= cnt){
            cnt += i*6;
            i++;
        }
        cout << i;
    }

    return 0;
}