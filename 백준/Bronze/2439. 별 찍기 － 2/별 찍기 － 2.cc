#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;

    for (int row = 1; row <= num; row++) {
        // 공백을 num -row개만큼
        for (int i = 0; i < num - row; i++) {
            cout << " ";
        }
        // 별을 row개만큼 출력
        for (int j = 0; j < row; j++) {
            cout << "*";
        }
        // 행이끝나면 줄바꿈
        cout << "\n";
    }
    return 0;
}