#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);

    
    while (N--) {
        int T;
        scanf("%d", &T);
        
        int nbr, min = 1000001, max = -1000001;

        while (T--) {
            scanf("%d", &nbr);

            (nbr > max) ? max =  nbr : max;
            (nbr < min) ? min = nbr : min;
        }
        printf("%d %d\n", min, max);
    }

    return 0;
}
