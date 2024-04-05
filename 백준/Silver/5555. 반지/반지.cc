#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;



int main() {
    FASTIO

    string find, ring;
    int N, cnt = 0;
    cin >> find >> N;

    while(N--){
        cin >> ring;

        ring += ring;
        if(ring.find(find) != string::npos) 
            cnt++;
    }
    
    cout << cnt;
    return 0;
}
