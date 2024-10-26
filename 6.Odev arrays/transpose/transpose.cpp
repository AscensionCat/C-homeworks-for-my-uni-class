#include <stdio.h>
#include <stdlib.h>

int transpose(int x[3][3], int y[3][3]);
int input(int x[3][3], int y[3][3]);

int main()
{
    int a[3][3], b[3][3];
    input(a, b);

    system("pause");
    return 0;
}

int input(int x[3][3], int y[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int value;
            printf("please enter the matrix value for matrix a %d %d\n", i, j);
            scanf("%d", &value);
            x[i][j] = value;
        }
    }
    transpose(x, y);
    return 1;
}
int transpose(int x[3][3], int y[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            y[i][j] = x[j][i];
        }
    }
    printf("transpose of this matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%7d", y[i][j]);
        }
        printf("\n");
    }
    return 1;
}