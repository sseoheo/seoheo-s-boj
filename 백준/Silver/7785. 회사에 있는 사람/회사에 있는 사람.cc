#include <iostream>
#include <map>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

map<string, string, greater<>> Entrance;

int main() {
    FASTIO

    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        string Name, Status;
        cin >> Name >> Status;

        if(Status == "enter")
            Entrance[Name] = Status;
        else
            Entrance.erase(Name);
    }

    for(const auto& entry : Entrance)
        cout << entry.first << '\n';

    return 0;
}

