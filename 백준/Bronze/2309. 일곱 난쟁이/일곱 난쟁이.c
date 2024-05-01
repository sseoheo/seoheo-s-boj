#include <stdio.h>

int main() {

    int arr[9], sum = 0, result[7];
    // 아홉난쟁이 키 입력하고 총합을 계산
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // 난쟁이들 중에서 키의 합이 100이 되는 일곱 명을 찾음
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - arr[i] - arr[j] == 100) {
                int idx = 0;
                // 100이 되는 두 명을 제외한 일곱 명의 키를 result 배열에 저장
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        result[idx++] = arr[k];
                    }
                }
            }
        }
    }
    // 오름차순으로 정렬
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < 7; i++) {
        printf("%d\n", result[i]);
    }
    
    return 0;
}
