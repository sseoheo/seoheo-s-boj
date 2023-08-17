#include <iostream>
#include <vector>

using namespace std;

int Bertrand(int n){

    int m = 2 * n, cnt = 0;
    vector<int> arr(m+1, 0);

    for(int i = 2; i <= m; i++){
        arr[i] = i;
    }

    for(int i = 2; i * i <= m; i++){
        if(arr[i] == 0)
            continue;
        for(int j = 2 * i; j <= m; j += i){
            if(arr[j] == 0)
                continue;
            else
                arr[j] = 0;
        }
    }

    for(int i = n+1; i <= m; i++){
        if(arr[i] != 0)
            cnt++;
    }

    return cnt;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);




    while(true){
        int n;
        cin >> n;
        if (n == 0)
            break;

        cout << Bertrand(n) << '\n';
    }


    return 0;
}