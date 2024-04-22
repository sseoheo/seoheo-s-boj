#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // 오늘이 일요일이고 X일 후가 화요일인지 확인
    int today = 0; // 일요일은 0으로 표시
    int X_day = (today + X) % 7; // X일 후의 요일 계산

    // 화요일이면 1을 출력, 그렇지 않으면 0을 출력
    if (X_day == 2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
