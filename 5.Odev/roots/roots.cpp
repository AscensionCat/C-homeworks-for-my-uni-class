#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float deltacalc(int x, int y, int z);
float rootcalc(int x, int y, int z, float discriminant);

int main()
{
    int a, b, c, deltasonuc;
    float root1, root2, discriminant;
    printf("Please enter coefficients (a,b,c)\n");
    scanf("%d%d%d", &a, &b, &c);
    deltacalc(a, b, c);

    system("pause");
    return 0;
}

float deltacalc(int x, int y, int z)
{
    float delta = (float)(y * y) - 4 * x * z;
    if (delta < 0)
    {
        printf("equation does not have an real root\n");
        return 0;
    }
    else
    {
        rootcalc(x, y, z, delta);
        return 1;
    }
}

float rootcalc(int x, int y, int z, float discriminant)
{
    float root1 = (-y + sqrt(discriminant)) / (2 * x);
    float root2 = (-y - sqrt(discriminant)) / (2 * x);
    if (root1 == root2)
    {
        printf("Double root of the equation is : %f ", root1);
    }
    else
    {
        printf("Roots of equation is: %f %f", root1, root2);
    }

    return 1;
}