    #include <iostream>
    #include <string>
    #include <cmath>
    #include <unordered_set>
    #include <unordered_map>
    #include <bitset>
    #include <stack>
    #include <queue>
    #include <vector>
    #include <algorithm>
    #include <climits>
    #include <map>
    #define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
    #define ll long long
    using namespace std;


    int main() {
        FASTIO

        int C, K, P;
        cin >> C >> K >> P;

        int Storage = 0;
        for(int i = 1; i <= C; i++){
            Storage += K * i + P * i * i;
        }

        cout << Storage;

        return 0;
    }