#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int M,x;
    string Ops;
    int arr[21] = {};

    cin >> M;
    while(M--){
        cin >> Ops;

        if(Ops == "add"){
            cin >> x;
            if(arr[x] == 0)
                arr[x] = 1;
        }
        else if(Ops == "remove"){
            cin >> x;
            if(arr[x] == 1)
                arr[x] = 0;
        }
        else if(Ops == "check"){
            cin >> x;
            if(arr[x] == 1)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(Ops == "toggle"){
            cin >> x;
            if(arr[x] == 1)
                arr[x] = 0;
            else
                arr[x] = 1;
        }
        else if(Ops == "all"){
            for(int i = 1; i <= 20; i++)
                arr[i] = 1;
        }
        else if(Ops == "empty"){
            for(int i = 1; i <= 20; i++)
                arr[i] = 0;
        }
    }
    return 0;
}