#include <stdio.h>
#include <stdlib.h>

int main()
{
	int total, i, j, tmp, star, sum = 0, ave;
	int* arr;
	printf("전체 학생 수 : ");
	scanf_s("%d", &total);
	arr = malloc(sizeof(int) * total);

	for (i = 0; i < total; i++) {
		printf("%d 번째 학생의 성적은 ? ", i + 1);
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}

	ave = sum / total;
	printf("전체 학생의 평균은 %d\n", ave);

	for (i = 0; i < total; i++) {
		printf("학생 %d : ", i + 1);
		if (arr[i] >= ave)
			printf("합격\n");
		else
			printf("불합격\n");
	}

	for (i = 0; i < total; i++)
		for (j = i+1; j < total; j++)
			if (arr[j] > arr[i]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
	printf("성적이 높은 순으로 정렬 후\n");
	for (i = 0; i < total; i++) {
		printf("%d번째 학생의 점수 : %d ", i + 1, arr[i]);
		for (j = 0; j < arr[i] / 5; j++)
			printf("*");
		printf("\n");
	}
	free(arr);
	return 0;
}
