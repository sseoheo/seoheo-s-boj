#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
#define MAX 1001

using namespace std;

string S;
int Sum[MAX][MAX];
int Answer = 0;

void Input(){
    cin >> S;
}

void Settings() {
    for (int i = 0; i < S.size(); i++) {
        Sum[i][i] = (S[i] - '0');
        for (int j = (i + 1); j < S.size(); j++) {
            Sum[i][j] = Sum[i][j - 1] + (S[j] - '0');
        }
    }
    for (int i = 0; i < S.size(); i++) {
        int IDX = i;
        for (int j = (i + 1); j < S.size(); j += 2) {
            if ((Sum[i][j] % 2 == 0) && ((Sum[i][j] / 2) == Sum[i][IDX])) {
                Answer = max(Answer, j - i + 1);
            }
            IDX++;
        }
    }
}

void Find_Answer() {
    cout << Answer << "\n";
}

int main() {
    FASTIO
    Input();
    Settings();
    Find_Answer();

    return 0;
}