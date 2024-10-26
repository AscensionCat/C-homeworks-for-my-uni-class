#include <stdio.h>
#include <stdlib.h>

int main()
{
    int top = 0, cou = 0;
    float ort;
    for (int i = 1000; i < 2000; i++)
    {
        int say = i, bir, on, yuz, bin, tersi = 0;
        bir = say % 10;
        on = say % 100 - bir;
        yuz = say % 1000 - on - bir;
        bin = say - yuz - on - bir;
        tersi = tersi + bir * 1000;
        tersi = tersi + on * 10;
        tersi = tersi + yuz / 10;
        tersi = tersi + bin / 1000;
        if (tersi < say)
        {
            printf("tersi kendisinden kucuk olan sayi: %d\n", say);
            cou++;
            top = top + say;
        }
    }
    ort = top / cou;
    printf("ortalamasi %f\n", ort);

    system("pause");
    return 0;
}
