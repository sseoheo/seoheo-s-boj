#include <iostream>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int cnt = 0;
    string origin, find;
    getline(cin, origin);
    getline(cin, find);

    for(int i = 0; i < origin.length(); i++){
        bool flag = 1;
        for(int j = 0; j < find.length(); j++){
            if(origin[i+j] != find[j]){
                flag = 0;
                break;
            }
        }
        if(flag){
            cnt++;
            i += find.length() - 1;
        }
    }

    cout << cnt;

    return 0;
}

