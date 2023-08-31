#include <iostream>
#include <cstdio>
 
using namespace std;
 
bool arr[502][502];
 
int main()
{
    int n;
    scanf("%d",&n);
 
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
 
        for (int x = a; x < c; x++)
            for (int y = b; y < d; y++)
                arr[x][y] = true;
    }
 
    int cnt = 0;
    for (int i = 0; i <= 500; i++)
        for (int j = 0; j <= 500; j++)
            if (arr[i][j])
                cnt++;
    printf("%d",cnt);
    return 0;
}