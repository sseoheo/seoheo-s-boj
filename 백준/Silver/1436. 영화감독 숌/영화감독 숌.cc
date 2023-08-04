#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int num = 666;
    string tmp;
    while (N > 0) {
        tmp = to_string(num);
        if (tmp.find("666") != -1) { // 666이 문자열에 포함되면 
            N--;
        }
        num++;
    }
    cout << tmp << '\n';
}

