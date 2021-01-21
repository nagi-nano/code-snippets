#include <stdio.h>

int main() {
    int prev = 1, cur = 1, next = 2, sum = 0;

    for(int i=2; next <= 1000000; i++)
    {
        prev = cur;
        cur = next;
        next = prev + cur;
        if(i%2==0) sum += cur;
    }
    printf("%d\n", sum);
    return 0;
}
