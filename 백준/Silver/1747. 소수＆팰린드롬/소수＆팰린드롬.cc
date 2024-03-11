#include <iostream>
#include <cmath>
#include <algorithm>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

bool isPrime(int n){
    if(n < 2)
        return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

bool isPalindrome(string n){
    string Origin = n;
    reverse(n.begin(), n.end());
    string Palindrome = n;

    if(Origin == Palindrome)
        return true;
    else
        return false;
}

int main() {
    FASTIO

    int N;
    cin >> N;

    while(true){
        if (isPrime(N) && isPalindrome(to_string(N))) {
            cout << N;
            break;
        }
        N++;
    }

    return 0;
}
