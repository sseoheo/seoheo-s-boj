#include <iostream>
#include <string>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main() {
    FASTIO

     int N; cin >> N;
    string str="";
    
    char arr[50];
    
    cin >> str;
    
    for(int i = 0; i<str.length(); i++)  arr[i] = str[i];
    
    for(int i = 1; i<N; i++){
        cin >> str;
        for(int s = 0; s<str.length(); s++){
            if(arr[s] != str[s]) arr[s] = '?';
        }
    }
    for(int i = 0; i<str.length(); i++) cout << arr[i];
    
    return 0;
}

