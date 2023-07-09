#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int num;
    int result = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        result += num * num;
    }
    
    result = result % 10;

    cout << result;

    return 0;
}