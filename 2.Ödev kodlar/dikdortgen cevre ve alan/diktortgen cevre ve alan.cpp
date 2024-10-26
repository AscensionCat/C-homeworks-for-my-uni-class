#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kenar1, kenar2, alan, cevre;
    printf("lutfen diktortgenin uzunluklarini giriniz");
    scanf("%f %f", &kenar1, &kenar2);
    alan = kenar1 * kenar2;
    cevre = kenar1 + kenar1 + kenar2 + kenar2;
    printf("Diktortgenin alani %f\nDiktortgenin cevresi %f\n", alan, cevre);

    system("pause");
    return 0;
}
