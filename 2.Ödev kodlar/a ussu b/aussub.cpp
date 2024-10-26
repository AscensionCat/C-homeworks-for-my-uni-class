#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taban, us, cou = 0, term = 1;
    printf("lutfen taban ve us degerlerini giriniz\n");
    scanf("%d %d", &taban, &us);
    if (us == 0)
    {
        printf("sonuc: 1\n");
    }
    else
    {
    A1:
        term = term * taban;
        cou++;
        if (cou < us)
        {
            goto A1;
        }
        else
        {
            printf("sonuc: %d\n", term);
        }
    }

    system("pause");
    return 0;
}
