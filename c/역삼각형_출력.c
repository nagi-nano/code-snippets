#include <stdio.h>

int main() {
    int i,j,n;
    printf("임의의 수를 입력해 주세요 : ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        for(j = 0; j < i*2-1; j++)
                printf("*");
        printf("\n");
    }
    printf("\n");
    return 0;
}
