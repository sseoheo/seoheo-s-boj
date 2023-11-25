#include <cstdio>
#include <cstring>
#define MAX 25

int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);

    char roulette[MAX];
    memset(roulette, '?', MAX);

    int index = 0;
    for(int i = 0; i < K; i++) {
        int pos;
        char c;
        scanf("%d %c", &pos, &c);

        pos %= N;
        index = (index - pos + N) % N; // Corrected line

        if(roulette[index] != c && roulette[index] != '?') {
            printf("!\n");
            return 0;
        }

        roulette[index] = c;
    }

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(roulette[i] != '?' && roulette[i] == roulette[j]) {
                printf("!\n");
                return 0;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        printf("%c", roulette[(i + index) % N]);
    }
    printf("\n");

    return 0;
}
