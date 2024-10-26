#include <stdio.h>
#include <stdlib.h>

float area(int x);
float circumference(int x);

int main()
{
    int radius;
    printf("Please enter the radius\n");
    scanf("%d", &radius);
    printf("area of this circle is %f\n", area(radius));
    printf("circumference of this circle is %f \n", circumference(radius));

    system("pause");
    return 0;
}

float area(int x)
{
    float are = (float)3.14 * x * x;
    return are;
}
float circumference(int x)
{
    float circum = (float)2 * 3.14 * x;
    return circum;
}