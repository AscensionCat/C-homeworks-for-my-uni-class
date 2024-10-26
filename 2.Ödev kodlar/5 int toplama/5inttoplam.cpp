#include <stdio.h>
#include <stdlib.h>

int main()
{
    int top = 0, cou = 0, say;
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
        printf("Sayilarin toplami %d \n", top);
    }

    system("pause");
    return 0;
}
