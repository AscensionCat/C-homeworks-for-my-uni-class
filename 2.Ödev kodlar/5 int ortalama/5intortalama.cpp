#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cou = 0, say;
    float ort, top = 0;
A1:
    printf("lutfen bir sayi giriniz.");
    scanf("%d", &say);
    top = top + say;
    cou++;
    if (cou < 5)
    {
        goto A1;
    }
    else
    {
        ort = top / 5.0;
        printf("Sayilarin ortalamasi %f \n", ort);
    }

    system("pause");
    return 0;
}
