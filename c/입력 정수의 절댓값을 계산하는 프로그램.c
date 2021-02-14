#include <stdio.h>
int abs(int num) {
    return num > 0 ? num : -num;
}

int main() {
    int input;
    printf("Enter integer number : ");
    scanf("%d", &input);
    printf("%d", abs(input));
    return 0;
}
