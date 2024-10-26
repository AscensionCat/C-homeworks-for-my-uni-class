#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayac = 0, sum = 0, cou = 0, N, aptalcou = 0;
    float ave;
A1:
    printf("uc basamakli pozitif bir sayi giriniz \n");
    scanf("%d", &N);
    if (N < 100)
    {
        if (aptalcou < 10)
        {
            printf("hatali giris yaptiniz tekrar giris ekranina yonlendiriliyorsunuz\n");
            aptalcou++;
            goto A1;
        }
        else if (aptalcou == 10)
        {
            printf("Aptal misiniz beyefendi 10 kere ne gireceginizi soyledik hala yanlis yapiyorsunuz\n");
        }
    }
    else
    {
        for (int i = 3; i < N; i++)
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
                sum += say;
                cou++;
            }
        }
        ave = (float)sum / cou;
        printf("sonuc %f\n", ave);
    }

    system("pause");
    return 0;
}