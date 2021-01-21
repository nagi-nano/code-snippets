#include <stdio.h>

int main()
{
        /* 다음 조건을 만족하는 a,b,c의 개수 구하기
         * i) a + b + c = 2000 ii) a＞b > c, a,b,c는모두 자연수
         */
        int count = 0;
        for(int a = 3; a < 2000; a++)
                for(int b = 2; b < a; b++)
                        for(int c = 1; c < b; c++)
                                if((a + b + c) == 2000) count++;

        printf("조건을 만족하는 수는 전부 %d개입니다.\n", count);
}
