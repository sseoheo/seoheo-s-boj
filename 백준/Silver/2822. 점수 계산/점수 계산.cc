#include <iostream>
#include <algorithm>
#include <vector>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<pair<int,int>>score(8);
int Sum;

bool compare(const pair<int, int>&a, const pair<int, int>&b){
    return a.second < b.second;
}

int main() {
    FASTIO

    for(int i = 0; i < 8; i++){
        cin >> score[i].first;
        score[i].second = i;
    }
    sort(score.begin(), score.end());

    for(int i = 3; i < 8; i++){
        Sum += score[i].first;
    }
    sort(score.begin() + 3, score.end(), compare);
    cout << Sum << '\n';
    for(int i = 3; i < 8; i++){
        cout << score[i].second + 1 << ' ';
    }
    return 0;
}

