#include <stdio.h>

int is_larger(int f, int s);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Result is %d.", is_larger(a, b));

    return 0;
}

int is_larger(int f, int s) {
    return f > s;
}
