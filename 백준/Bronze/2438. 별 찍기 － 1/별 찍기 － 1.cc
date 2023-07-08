#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    // n번만큼 반복
    for (int i = 1; i <= n; i++) {
        
        // i행에서 i번만큼 별을 출력
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // 해당 행의 출력이 끝나면 줄바꿈 
        cout << "\n";
    }

    return 0;
}