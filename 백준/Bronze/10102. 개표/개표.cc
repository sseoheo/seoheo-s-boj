#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int V;
    string Vote;
    cin >> V;
    cin >> Vote;

    int cnt = 0;
    for(int i = 0; i < Vote.length(); i++){
        if(Vote[i] == 'A')
            cnt++;
        else
            cnt--;
    }

    if(cnt > 0)
        cout << "A";
    else if (cnt < 0)
        cout << "B";
    else
        cout << "Tie";

    return 0;
}