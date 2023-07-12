#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int T;
    string quiz;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> quiz;

        int score = 0, cnt = 0;

        // 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
        for (int i = 0; i < quiz.length(); i++) {
            if (quiz[i] == 'O') {
                cnt += 1;
            }
            else
                cnt = 0;
            score += cnt;
        }

        cout << score << '\n';
    }
        
    

    return 0;
}