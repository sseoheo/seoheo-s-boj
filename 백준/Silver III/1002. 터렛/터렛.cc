#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int x1, y1, r1, x2, y2, r2, distance, long_d, short_d;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        distance = ((x1 -x2) * (x1 -x2) + (y1- y2) * (y1 -y2));
        long_d = (r1 +r2) * (r1 + r2);
        short_d = (r1 - r2) * (r1 - r2);

        if(distance == 0){
            if(short_d == 0)
                cout << "-1" << '\n';
            else
                cout << "0" << '\n';
        }
        else if(distance == short_d || distance == long_d)
            cout << "1" << '\n';
        else if(short_d < distance && distance < long_d)
            cout<< "2" << '\n';
        else
            cout << "0" << '\n';
    }


    return 0;
}
