#include <bits/stdc++.h>

using namespace std;

string Pokemon[100004];
map<string, int> Pokedex;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    string name;

    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        cin >> name;
        Pokemon[i] = name;
        Pokedex[name] = i;
    }

    string temp; // 이름과 번호가 섞여있으므로 string
    for(int j = 0; j < M; j++){
        cin >> temp;
        if(atoi(temp.c_str()) == 0) {
            cout << Pokedex[temp] << '\n';
        }
        else
            cout << Pokemon[atoi(temp.c_str())] << '\n';
    }

    return 0;
}