#include <iostream>

using namespace std;

int Factorial(int A){
    if (A <= 1)
        return 1;
    else
        return A * (Factorial(A-1));
}

int main(){

    int n;
    cin >> n;

    cout << Factorial(n);
    
    return 0;
}