#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // const wchar_t *hello = L"abcçdefgğhıijklmnoöprsştuüvyz";
    // wprintf(L"%ls\n", hello);
    wprintf(L"abcçdefgğhıijklmnoöprsştuüvyz\n");

    system("pause");
    return 0;
}