#include <iostream>

using namespace std;

int SelfNumber(int n){
    int sum = n;

    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    bool check[10001] = {false, };

    for(int i = 1; i < 10001; i++){
        int n = SelfNumber(i);
        if (n < 10001)
            check[n] = true;
        if(check[i] == false ){
            cout << i << '\n';
        }
    }


    return 0;
}