#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float deltacalc(int x, int y, int z);
float doublerootcalc(int x, int y, int z);
float rootcalc(int x, int y, int z, float discriminant);

int main()
{
    int a, b, c;
    float delta, root1, root2;
    printf("Please enter coefficients (a,b,c)\n");
    scanf("%d%d%d", &a, &b, &c);
    delta = deltacalc(a, b, c);
    if (delta < 0)
    {
        printf("equation does not have an real root\n");
    }
    else if (delta == 0)
    {
        root1 = doublerootcalc(a, b, c);
        printf("Double root of the equation is : %f", root1);
    }
    else
    {
        rootcalc(a, b, c, delta);
    }

    system("pause");
    return 0;
}

float deltacalc(int x, int y, int z)
{
    float delta = (float)(y * y) - 4 * x * z;
    return delta;
}

float doublerootcalc(int x, int y, int z)
{
    float root = (float)-y / (2 * x);
    return root;
}

float rootcalc(int x, int y, int z, float discriminant)
{
    float root1 = (-y + sqrt(discriminant)) / (2 * x);
    float root2 = (-y - sqrt(discriminant)) / (2 * x);
    printf("Roots of equation is: %f %f", root1, root2);
    return 1;
}