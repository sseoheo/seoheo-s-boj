#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, m, n, r, ans;
    cin >> t ;

    while(t--){
        cin >> m >> n;

        ans = 1;
        r = 1;
        for(int i = n; i > n - m; i--){
            ans *= i;
            ans /= r++;
        }
        cout << ans << '\n';
    }
    return 0;
}