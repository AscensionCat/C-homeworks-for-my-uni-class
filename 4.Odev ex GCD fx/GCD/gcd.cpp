#include <stdio.h>
#include <stdlib.h>

int main()
{
    int say1, say2, gcd;
    printf("lutfen iki sayi giriniz\n");
    scanf("%d %d", &say1, &say2);

    for (int i = 1; i <= say1 && i <= say2; i++)
    {
        if (say1 % i == 0 && say2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD is: %d\n", gcd);

    system("pause");
    return 0;
}