#include <iostream>
#include <string>

using namespace std;

int N;
string base, comp;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int alpha[26]= {0};
    cin >> N;
    cin >> base;
    for (int i = 0; i < base.length(); i++)
        alpha[base[i] - 'A']++;

    int cnt = 0;
    for (int i = 0; i< N-1; i++)
    {
        cin >> comp;
        int alphacomp[26];
        for (int i = 0; i < 26; i++) {
            alphacomp[i] = alpha[i]; // 배열 직접 복사
        }

        int same = 0;
        for (int i = 0; i < comp.length(); i++) {
            if (alphacomp[comp[i] - 'A'] > 0) {
                alphacomp[comp[i] - 'A']--;
                same++;
            }
        }

        if (base.length() == comp.length()){
            if (same == base.length() || same == base.length() - 1)
                cnt++;
        }
        else if (base.length() - 1 == comp.length() && same == base.length() - 1) {
            cnt++;
        }
        else if (base.length() + 1 == comp.length() && same == base.length())
            cnt++;
        else
            continue;
    }
    cout << cnt << '\n';

    return 0;
}