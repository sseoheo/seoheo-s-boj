#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int H;
    cin >> H;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < H - abs(H/2 - i) * 2; j++)
            cout << '*';
        for(int j = 0; j < abs(H/2 - i) * 4; j++)
            cout << ' ';
        for(int j = 0; j < H - abs(H/2 - i) * 2; j++)
            cout << '*';
        cout << '\n';
    }
    return 0;
}