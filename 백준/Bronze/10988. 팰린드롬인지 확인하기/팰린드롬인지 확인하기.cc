#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    string str;
    cin>>str;
 
    int len = str.length();
 
    int cnt=0;
 
    // 첫 글자 / 마지막글자가 같을때마다 카운트하고 
    // 그 카운트 수가 문자열/2와 같으면 1을 출력하는 코드
/*
    for(int i=0; i<len/2; i++){
        if(str[i]==str[str.length()-1-i]){
            cnt++;
    }
}
    if(cnt==len/2){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
    */
 
    
    for(int i=0; i<len/2; i++){
        if(str[i]!=str[str.length()-1-i]){
            cout<<"0"<<"\n";
            // 첫글자와 마지막 글자가 같지 않으면 바로 끝내버리는 코드
            return 0;
        }
    }
    cout<<"1"<<"\n";
}