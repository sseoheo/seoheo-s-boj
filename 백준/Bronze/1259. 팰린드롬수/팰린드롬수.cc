#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string palindrome;

    while (true) {
        
        cin >> palindrome;
        int len = palindrome.length();

        if (palindrome == "0")
            break;

        int flag = 0;
        for (int i = 0; i < len/2; i++){
            if (palindrome[i] != palindrome[len - 1 - i]) {
                cout << "no" << '\n';
                flag = 1;
                break;
            }
        }
        if (flag != 1)
            cout << "yes" << '\n';

    }

    return 0;
    
}