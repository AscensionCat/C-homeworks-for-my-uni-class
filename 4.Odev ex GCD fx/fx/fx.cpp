#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, N, i = 1;
    float sum = 0;
    printf("lutfen x degeri giriniz\n");
    scanf("%d", &x);
    printf("lutfen N degeri giriniz\n");
    scanf("%d", &N);

    while (i <= N) // klavyeden girilen N değeri kadar dönecek
    {
        int us = 1, fak = 1, usdo = i + (i - 1), fakdo = i + (i - 1); // kullanılacak int ler
        float sonuc;
        while (usdo > 0)
        {
            us = us * x; // değilse i-1 değeri kadar döndürerek o anki bölümün üst kısmını bulduk
            usdo--;
        }
        while (fakdo > 0)
        {
            fak = fak * fakdo;
            fakdo--;
        }
        sonuc = (float)us / fak;
        if (i % 2 == 0)
        {
            sonuc = sonuc * -1.0;
        }
        sum = sum + sonuc;
        i++;
    }
    printf("sonuc: %f \n", sum);

    system("pause");
    return 0;
}