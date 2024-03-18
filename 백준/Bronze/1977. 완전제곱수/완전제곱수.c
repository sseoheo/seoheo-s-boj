#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	
	int m, n; scanf("%d%d", &m,&n);
	int sum = 0;
	int min = -1;

	
	for(int i = 100; i >= 1; i--) {
		if (m <= i * i && i * i <= n) {
			sum += i * i;
			min = i * i;
		}
	}
	if (min == -1)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
	return 0;
}