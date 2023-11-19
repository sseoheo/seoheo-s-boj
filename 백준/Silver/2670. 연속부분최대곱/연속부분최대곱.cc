#include <iostream>
#include <vector>
#include <algorithm>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

vector<double> v;
double dp[10001];

int main() {
    FASTIO

    int N;
    double MaxMul = 0.0;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        double nbr;
        cin >> nbr;
        v.push_back(nbr);
    }

    dp[0] = v[0];
    for(int i = 1; i< N; i++){
        dp[i] = max(v[i], v[i] * dp[i-1]);
        MaxMul = max(MaxMul, dp[i]);
    }
    
    printf("%.3f", MaxMul);

    return 0;
}