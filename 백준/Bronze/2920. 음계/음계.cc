#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int arr[8];
    int asc = 0;
    int des = 0;

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        
        // 음계에 들어가는 수가 오름차순과 같은 index+1 이면
        if (arr[i] == i + 1) {
            asc += 1;
        }
        // 음계에 들어가는 수가 내림차순과 같은 8-index이면
        else if(arr[i] == 8 - i) {
            des += 1;
        }
    } 

    if (asc == 8)
        cout << "ascending";
    else if (des == 8)
        cout << "descending";
    else
        cout << "mixed";

    return 0;
}