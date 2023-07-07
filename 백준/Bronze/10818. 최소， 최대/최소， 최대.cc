#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int minValue = 1000001;
    int maxValue = -1000001;

    int N;
    cin >> N;

    int inputValue;
    for (int i = 0; i < N; i++) {
        cin >> inputValue;

        if (inputValue < minValue) {
            minValue = inputValue;
        }

        if (inputValue > maxValue) {
            maxValue = inputValue;
        }
    }

    cout << minValue << " " << maxValue;

    return 0;
}