#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string S;
    int alpha[26] = {};
    cin >> S;

    for (char i = 'a'; i <= 'z'; i++) {
        // s.find(n문자열에서 최초로 등장하는 인덱스 번호를 반환해주는 함수
        cout << (int)S.find(i) << ' ';
    }
    

    return 0;
}