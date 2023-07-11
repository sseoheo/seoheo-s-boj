#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int a, b, c;
    int arr[10] = { 0 };

    cin >> a >> b >> c;
    
    int multi = a * b * c;
    
    // 1의 자리에 맞는 배열을 증가
    // 0이 될때까지 돌려줌
    while (multi != 0) {
        arr[multi % 10] += 1; //
        multi /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\n";
    }
        
    return 0;
}