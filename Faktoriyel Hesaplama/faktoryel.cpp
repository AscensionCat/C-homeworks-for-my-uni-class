// faktoryel
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int f = 1, a;
   float b;
   printf("hangi sayinin faktoryel degeri hesaplansin?");
A2:
   scanf_s("%f", &b); // ekrandaki say�y� al�r, b ye atar
   a = b;
   if (a < b)
   {
      printf("bu sayi ondalikli sayidir, F degeri hesaplanamaz\n");
      printf("lutfen pozitif bir tamsayi giriniz?");
      goto A2;
   }
   if (a == 0)
      goto A3;
   if (a < 0)
   {
      printf("bu sayinin faktoryel degeri hesaplanamaz\n");
      printf("lutfen pozitif bir tamsayi giriniz?");
      goto A2;
   }
A1:
   f = f * a;
   a = a - 1;
   if (1 < a)
      goto A1;
A3:
   printf("istene deger = %d\n", f);
   system("pause");
   return 0;
}
