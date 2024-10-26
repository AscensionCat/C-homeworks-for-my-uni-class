#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int value;
            printf("please enter the matrix value for matrix a %d %d\n", i, j);
            scanf("%d", &value);
            a[i][j] = value;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int value;
            printf("please enter the matrix value for matrix b %d %d\n", i, j);
            scanf("%d", &value);
            b[i][j] = value;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("sum of this two matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%7d", c[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
