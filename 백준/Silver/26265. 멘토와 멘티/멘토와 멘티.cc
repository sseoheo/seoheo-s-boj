#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<pair<string, string>> Men_Men;

bool compare(pair<string, string>v1, pair<string, string>v2){
    if(v1.first == v2. first){
        return v1.second > v2.second;
    }
    else
        return v1.first < v2.first;
}
int main() {
    FASTIO

    int N;
    cin >> N;

    string Mentor, Mentee;
    for(int i = 0; i < N; i++){
        cin >> Mentor >> Mentee;
        Men_Men.push_back({Mentor, Mentee});
    }
    sort(Men_Men.begin(), Men_Men.end(), compare);
    
    for(int i = 0; i < N; i++){
        cout << Men_Men[i].first << ' ' << Men_Men[i].second << '\n';
    }


    return 0;
}
