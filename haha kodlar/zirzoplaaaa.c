#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cou, bolunencou = 0;
    for (int i = 1000; i < 2000; i++)
    {
        int say = i, bolen = say - 1;
        printf("for sayi: %d, bolen: %d\n", say, bolen);
        while (bolen > 1)
        {
            printf("sayi: %d, bolen: %d\n", say, bolen);
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
        if (bolunencou == 0)
        {
            cou++;
        }
    }
    printf("%d\n", cou);

    system("pause");
    return 0;
}
