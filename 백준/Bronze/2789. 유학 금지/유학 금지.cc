#include <iostream>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int main() {
    FASTIO

    string str1;
    string filtering = "CAMBRIDGE";

    cin >> str1;
    for(int i = 0; i < str1.size(); i++){
        for(int j = 0; j < filtering.size(); j++){
            if(str1[i] == filtering[j])
                str1[i] = 0;
        }
    }
    
    for(int i = 0; i < str1.size(); i++){
        if(str1[i] != 0)
            cout << str1[i];
    }
    return 0;

}