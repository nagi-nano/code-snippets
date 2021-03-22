#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int k = 0; k < (rows - i) * 2 - 1; k++)
            printf("* ");
        printf("\n");
    }
}
