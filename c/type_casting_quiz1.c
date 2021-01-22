// 임의의 실수에서 소수점 이하 두자리수를 추출하여 정수형 변수에 대입하는 프로그램

#include <stdio.h>
int main() {
	int i;
	float f;
	printf("실수를 입력하시오 : ");
	scanf_s("%f", &f);
	i = (f - (int)f) * 100;

	printf("i = %d\n", i);
	return 0;
}
