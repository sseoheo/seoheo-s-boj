#include <iostream>
#include <map>

using namespace std;

map<string, string> Site;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    string address, password;
    cin >> N >> M;


    while(N--){
        cin >> address >> password;
        
        Site[address] = password;
    }

    while(M--){
        cin >> address;
        
        cout << Site[address] << '\n';
    }
    
    return 0;
}