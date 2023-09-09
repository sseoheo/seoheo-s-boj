#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int M,x;
    string Ops;
    int S = 0;

    cin >> M;
    while(M--){
        cin >> Ops;

        if(Ops == "add"){
            cin >> x;
            // or 연산자를 통해 x번째 자리수를 1로 채운다.
            S |= (1 << x);
        }
        else if(Ops == "remove"){
            cin >> x;
            // ex) 1000 & ~(1000) = 0000
            S &= ~(1 << x);
        }
        else if(Ops == "check"){
            cin >> x;
            if(S & (1 << x))
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(Ops == "toggle"){
            cin >> x;
            // S의 x번째 자리가 1이라면 1^1=0이 되어 1->0이 되고
            // x번째 자리가 0이라면 0^1=1 이 되어 0 -> 1이 된다.
            S ^= (1 << x);
        }
        else if(Ops == "all"){
            // ex) 10000 - 1 = 1111
            S = (1 << 21) - 1;
        }
        else if(Ops == "empty"){
            S = 0;
        }
    }
    return 0;
}