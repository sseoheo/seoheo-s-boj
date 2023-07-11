#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int T;
    int H, W, N;
    int result;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;

        if (N % H == 0) {
            result = H * 100 + (N / H);
        }
        else {
            result = (N % H) * 100 + (N / H) + 1;
        }

        cout << result << "\n";
    }

    return 0;
}