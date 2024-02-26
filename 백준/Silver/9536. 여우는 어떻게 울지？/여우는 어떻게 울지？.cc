#include <iostream>
#include <map>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int T; cin >> T;
    
    while(T--){
        string buffer, origin;
        getline(cin, buffer);
        getline(cin , origin);
        map<string,bool> m;
        
        while(1){
            string a, b, c;
            cin >> a >> b >> c;
            
            if(a == "what"){
                cin >> b >> c;
                break;
            }
            m[c] = true;
        }
        
        string res = "";
        for(int i = 0; i < origin.size(); i++){
            if(origin[i] == ' '){
                if(!m[res])
                    cout << res << " ";
                res = "";
            }
            else
                res += origin[i];
        }
        if(!m[res])
            cout << res << " ";
        cout << "\n";
    }
    
    return 0;
}