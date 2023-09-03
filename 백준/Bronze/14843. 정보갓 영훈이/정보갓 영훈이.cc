#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<double> Scores;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    double S, A, T, M;
    cin >> N;

    double score = 0;
    while (N--) {
        cin >> S >> A >> T >> M;
        score += S*(1 + 1/A)*(1 + M/T) / 4;
    }
    Scores.push_back(score);

    int P;
    cin >> P;
    for(int i = 0; i < P; i++){
        double R;
        cin >> R;
        Scores.push_back(R);
    }

    sort(Scores.begin(), Scores.end());


    for (int i=0; i < P+1; i++) {
        if (score == Scores[i]) {
            if (i >= (P+1) * 0.85)
                printf("The total score of Younghoon \"The God\" is %0.2lf.", round(score*100)/100);
            else
                printf("The total score of Younghoon is %0.2lf.", round(score*100)/100);
            return 0;
        }
    }

    return 0;
}