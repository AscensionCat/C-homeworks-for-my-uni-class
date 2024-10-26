#include <stdio.h>
#include <stdlib.h>

int main()
{
    float in, kesir;
    printf("lutfen bir sayi giriniz");
    scanf("%f", &in);
    int tam = in;
    kesir = in - tam;
    printf("Sayinin tam kismi %d\nKesir kismi %f\n", tam, kesir);

    system("pause");
    return 0;
}
