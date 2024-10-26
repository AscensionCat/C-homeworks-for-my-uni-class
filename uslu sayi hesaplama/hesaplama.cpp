#include <stdio.h>
#include <stdlib.h>
int main()
{
    int carpim = 1, sayi, us;
    printf("Sayi giriniz. \n");
    scanf("%d", &sayi);
    printf("Us giriniz \n");
    scanf("%d", &us);
    for (int i = 0; i < us; i++)
    {
        carpim = carpim * sayi;

        if (i == us - 1)
        {
            printf("sonuc = %d \n", carpim);
        }
    }

    system("pause");
    return 0;
}