#include <iostream>
#include <unordered_map>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
#define ll long long

using namespace std;
int alpha[26];
int main() {
    FASTIO

    string S;
    cin >> S;
    
    for(int i = 0; i < S.size(); i++){
        alpha[S[i] - 'a']++;
    }

    for(int j = 0; j < 26; j++){
        cout << alpha[j] << " ";
    }

    return 0;
}