#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;


int main() {
    FASTIO

    int N, ans = -1;
    cin >> N;

    queue<int> Q;
    Q.push(0);

   while(not(Q.empty())){
       int c = Q.front();
       Q.pop();

       if (c > N)
           continue;
       
       ans = c;

       Q.push(10 * c + 4);
       Q.push(10 * c + 7);
   }

   cout << ans << "\n";

    return 0;
}