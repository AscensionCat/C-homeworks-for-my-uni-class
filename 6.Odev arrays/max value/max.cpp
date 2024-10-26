#include <stdio.h>
#include <stdlib.h>

int find_max(int x[3][3], int maxi);
int input(int x[3][3], int maxi);

int main()
{
    int a[3][3], maxi = 0;
    input(a, maxi);

    system("pause");
    return 0;
}

int input(int x[3][3], int maxi)
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
    find_max(x, maxi);
    return 1;
}
int find_max(int x[3][3], int maxi)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (x[i][j] > maxi)
            {
                maxi = x[i][j];
            }
        }
    }
    printf("max value of this matrix is: %d\n", maxi);
    return 1;
}
