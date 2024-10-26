#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, N;
    float sum;
    printf("lutfen x degeri giriniz\n");
    scanf("%d", &x);
    printf("lutfen N degeri giriniz\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) // klavyeden girilen N değeri kadar dönecek
    {
        int usdo = i - 1, us = 1, fakdo = i - 1, fak = 1; // kullanılacak int ler
        float sonuc;
        if (usdo == 0)
        {
            us = 1; // eğer usdongusu ilk kez dönüyorsa bolumun üst kısmını 1 yaptık
        }
        else
        {
            for (usdo; usdo > 0; usdo--)
            {
                us = us * x; // değilse i-1 değeri kadar döndürerek o anki bölümün üst kısmını bulduk
            }
        }
        for (fakdo; fakdo > 0; fakdo--)
        {
            fak = fak * fakdo;
        }
        sonuc = (float)us / fak;
        sum = sum + sonuc;
    }
    printf("sonuc: %f \n", sum);

    system("pause");
    return 0;
}