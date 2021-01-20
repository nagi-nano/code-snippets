#include <stdio.h>
int main() {
	int i, j;

	printf("비교할 두 수를 입력해 주세요 : ");
	scanf_s("%d %d", &i, &j);

	if (i > j) {
		printf("%d은 %d보다 큽니다.\n", i, j);
	}
	else if (i >= j) {
		printf("%d이 %d보다 크거나 같습니다.\n", i, j);
	}
	if (i < j) {
		printf("%d은 %d보다 작습니다.\n", i, j);
	}
	else if (i <= j) {
		printf("%d이 %d보다 작거나 같습니다.\n", i, j);
	}
	if (i == j) {
		printf("%d와 %d는 같습니다.\n", i, j);
	}
	else if (i != j) {
		printf("%d와 %d는 다릅니다.\n", i, j);
	}

	return 0;
}
