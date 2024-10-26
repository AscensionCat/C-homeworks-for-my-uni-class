#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cou = 0;
    for (int i = 1000; i < 2000; i++)
    {
        int say = i, bolen = say - 1, bolunencou = 0;
        // printf("for sayi: %d, bolen: %d\n", say, bolen);
        while (bolen > 1)
        {
            // printf("sayi: %d, bolen: %d\n", say, bolen);
            if (say % bolen == 0)
            {
                bolen--;
                bolunencou++;
            }
            else
            {
                bolen--;
            }
        }
        // printf("bolunencounter %d sayisi icin %d dir.\n", say, bolunencou);
        if (bolunencou == 0)
        {
            cou++;
        }
    }
    printf("sonuc: %d\n", cou);

    system("pause");
    return 0;
}
