#include <stdio.h>
#include <stdlib.h>

float average(int x, int y, int z);

int main()
{
    int num1, num2, num3;
    printf("please enter the numbers\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Average of this 3 number is: %f", average(num1, num2, num3));

    system("pause");
    return 0;
}

float average(int x, int y, int z)
{
    int sum = x + y + z;
    float ave = (float)sum / 3;
    return ave;
}