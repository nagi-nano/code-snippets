#include <stdio.h>

int main() {
    int i, max, sum = 0;
    printf("Enter a maximum number. \n");
    scanf("%d", &max);
    for (i = 1; sum+i < 1000; i++)
            sum += i;
    printf("The sum from 1 to %d is %d\n", i, sum);
}
