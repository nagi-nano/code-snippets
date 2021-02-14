#include <stdio.h>

int quadrant(int x, int y) {
    if (x > 0) {
        if (y > 0)
            return 1;
        else
            return 4;
    }
    else {
        if (y > 0)
            return 2;
        else
            return 3;
    }
}

int main() {
    int x, y;

    printf("Enter two integers : ");
    scanf("%d %d", &x, &y);
    printf("It's in the %dth quadrant\n", quadrant(x, y));

    return 0;
}
