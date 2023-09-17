#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

struct country {
    int countryNbr;
    int gold;
    int silver;
    int bronze;
};

bool cmp(country a, country b) {
    if (a.gold > b.gold)
        return true;
    else if (a.gold == b.gold) {
        if (a.silver > b.silver)
            return true;
        if (a.silver == b.silver) {
            if (a.bronze > b.bronze)
                return true;
        }
    }
    return false;
}

country arr[1001];
int N, K;
int n1, n2, n3, n4;
int result, val;

void Input() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> n1 >> n2 >> n3 >> n4;
        arr[i].countryNbr = n1;
        arr[i].gold = n2;
        arr[i].silver = n3;
        arr[i].bronze = n4;
    }
}

void Settings() {
    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++) {
        if (arr[i].countryNbr == K) {
            result = i;
            break;
        }
    }
    val = 0;
    for (int i = result - 1; i >= 0; i--) {
        if (arr[i].gold != arr[result].gold || arr[i].silver != arr[result].silver || arr[i].bronze != arr[result].bronze) {
            break;
        }
        val++;
    }
}

void Find_Answer() {
    cout << result - val + 1 << "\n";
}

int main() {
    FASTIO
    Input();
    Settings();
    Find_Answer();

    return 0;
}
