#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int diagonal, heightRatio, widthRatio;
    cin >> diagonal >> heightRatio >> widthRatio;

    double x = sqrt((double)(diagonal * diagonal) / (heightRatio * heightRatio + widthRatio * widthRatio));
    int height = floor(heightRatio * x);
    int width = floor(widthRatio * x);

    cout << height << " " << width << "\n";

    return 0;
}