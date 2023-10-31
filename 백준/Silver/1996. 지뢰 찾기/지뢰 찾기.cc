#include <stdio.h>

char board[1001][1001];
int answer[1001][1001];
int moveX[8] = {-1, -1, -1, 0, 0, 1,1,1};
int moveY[8] = {-1, 0, 1, -1, 1, -1, 0 ,1};

int main() {

    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf(" %c", &board[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (board[i][j] < '0' || board[i][j] > '9')
                continue;

            for(int k = 0; k < 8; k++){
                int x = i + moveX[k];
                int y = j + moveY[k];

                if (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == '.')
                    answer[x][y] += board[i][j] - '0';
            }
        }
    }


    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (board[i][j] != '.')
                printf("*");
            else if (answer[i][j] > 9)
                printf("M");
            else
                printf("%d", answer[i][j]);
        }
        printf("\n");
    }

    return 0;
}
