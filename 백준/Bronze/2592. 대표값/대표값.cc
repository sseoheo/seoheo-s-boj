#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    int sum = 0, average, mode, cnt = 0;
    vector<int> arr(1001, 0);
    
    for(int i = 0; i < 10; i++){
        int num;
        cin >> num;

        sum += num;
        arr[num] ++;
        if(arr[num] > cnt){
            mode = num;
            cnt = arr[num];
        }
    }

    average = sum / 10;

    cout << average << "\n";
    cout << mode << "\n";

    return 0;
}