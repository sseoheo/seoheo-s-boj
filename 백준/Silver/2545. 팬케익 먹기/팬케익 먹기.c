#include <stdio.h>

#ifndef max
#define max(a, b) (((a) > (b)) ? (a) : (b))
#endif

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long Width, Height, Depth, Cut;
        long long Volume = 0;

        scanf("%lld %lld %lld %lld", &Width, &Height, &Depth, &Cut);
        while (Cut--) {
            long long temp = max(max(Width, Height), Depth);
            if (temp == Width)
                Width -= 1;
            else if (temp == Height)
                Height -= 1;
            else if (Depth == temp)
                Depth -= 1;
        }
        Volume = Width * Height * Depth;
        printf("%lld\n", Volume);
    }

    return 0;
}
