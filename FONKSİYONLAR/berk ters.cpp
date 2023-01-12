#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void terscevir(char dizi[])
{
    int i,uzunluk,gecici;

    uzunluk=strlen(dizi);

    for(i=0;i<uzunluk/2;i++)
    {
        gecici = dizi[i];
        dizi[i]=dizi[uzunluk-1];
        dizi[uzunluk-1-i]=gecici;
    }
}

int main(){


    char text[200];
	puts("kelime gir");
    gets(text);

    terscevir(text);

    printf("%s",text);

    return 0;
}
