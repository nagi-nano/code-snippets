// 임의의 자연수를 입력받아 소인수 분해한 결과를 출력하는 프로그램.

#include <stdio.h>

int main()
{
        int n,i;

        printf("임의의 자연수를 입력해 주세요. ");
        scanf("%d",&n);

        printf("%d = ",n);
        while(n >= 2)
        {
                for(i = 2; i <= n; i++)
                {
                    if(n % i == 0)
                    {
                        printf("%d", i);
                        n /= i;
                        if(n == 1) break;
                        else printf(" * ");
                    }

                }
        }
        printf("\n");
}
