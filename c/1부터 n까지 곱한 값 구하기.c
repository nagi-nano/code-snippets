#include <stdio.h>

int main()
{
        int n,result=1;
        printf("값을 입력해 주세요. ");
        scanf("%d", &n);

        for(int i=1; i<=n; i++)
                result *= i;
        printf("1부터 %d까지 전부 곱한 값은 %d입니다.\n", n, result);
}
