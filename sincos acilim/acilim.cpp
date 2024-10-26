#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bass = 1, cou = 1, couu = 1, x, N, say; // değişken tanımlamaları
    float term = 0, uslu = 1, sum = 0;
    printf("lutfen x degeri giriniz \n");
    scanf("%d", &x); // x değerinin alınması
    printf("lutfen n degeri giriniz \n");
    scanf("%d", &N); // N değerinin alınması
A1:
    uslu = uslu * x * x; // bölümün üst kısmındaki üslü ifadenin hesaplandığı kısım önceki üslü değeri x^2 ile çarpıyoruz
    couu++;              // üslü sayı hesabının sayacını bir arttırıyoruz
    if (couu < cou)      // eğer üslü sayının döngüsü ana döngünün dçngüsünden küçükse tekrar hesaplamaya gidiyoruz değilse faktöriyele devam
        goto A1;
    printf("uslu sayi %f \n", uslu); // üslü sayı log'u
    say = 2 * cou;                   //??????????????????
    printf("fak oncesi cou = %d \n", cou);
    float fak = 1;
A2:
    fak = fak * say;            // faktöriyel hesaplanması
    say--;                      // sayının azaltılması
    printf("fak = %f \n", fak); // faktöriyel sayısının log'u
    if (say <= 0)               // eğer sayı 0 a gelirse 0 la çarpılmaması için programın devamı değilse direkt hesaplamaya(a3) gidiyor
    {
        if (cou % 2 == 0)
        {
        A3:
            term = uslu / fak;
        A4:
            printf("Term is %f \n", term);
            sum = sum + term;
            printf("sum is %f \n", sum);
            cou++;
            if (cou < N)
            {
                goto A1;
            }
            else
            {
                sum = sum + 1;
                printf("sonuc = %f \n", sum);
            }
        }
        else
        {
            term = uslu / fak;
            term = term * -1.0;
            printf("else term is %f \n", term);
            goto A4;
        }
    }
    else
    {
        goto A2;
    }

    system("pause");
    return 0;
}