#include <stdio.h>

#ifndef max
#define max(a,b)  (((a) > (b)) ? (a) : (b))
#endif

int main(){

    int T;
    scanf("%d", &T);

    while(T--){
        int Width, Height, Depth, Cut;
        long long Volume = 0;

        scanf("%d %d %d %d", &Width, &Height, &Depth, &Cut);
        while(Cut--){
            int temp = max(max(Width, Height), Depth);
            if(temp == Width)
                Width -= 1;
            else if(temp == Height)
                Height -= 1;
            else if(Depth == temp)
                Depth -= 1;
        }
        Volume = Width * Height * Depth;
        printf("%d\n", Volume);
    }

    return 0;
}