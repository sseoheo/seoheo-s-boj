#include <iostream>
#include <string>

using namespace std;
// 아스키코드 : 대문자 65~90, 소문자 97~122 
int alpha[26], same_cnt = 0;
string str;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        // 대문자일 경우
        if (str[i] < 97) {
            alpha[str[i] - 65]++;
        }
        // 소문자일 경우
        else
            alpha[str[i] - 97]++;
    }
    
    int max_alpha = 0, max_idx = 0;

    for (int j = 0; j < 26; j++) {
        if (max_alpha < alpha[j]) {
            max_alpha = alpha[j];
            max_idx = j;
        }
    }

    // 가장 많이 사용된 알파벳이 여러개인 경우
    for (int k = 0; k < 26; k++) {
        if (max_alpha == alpha[k]) {
            same_cnt++;
        }
    }

    if (same_cnt > 1)
        cout << "?";
    else
        cout << (char)(max_idx + 65);
    
    return 0;
}