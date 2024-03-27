#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n - 1; i++)
        printf(" ");
    printf("*\n");

    for (int i = 2; i <= n; i++)
    {
        
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        printf("*");
        
        for (int k = 1; k <= (i - 1) * 2 - 1; k++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}