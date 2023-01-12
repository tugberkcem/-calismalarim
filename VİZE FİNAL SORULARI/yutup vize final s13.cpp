#include <stdio.h>
#include <stdlib.h>
int main() {
int sayi,a,b,c,toplam;

printf("3 basamakli sayi girin ");
scanf("%d",&sayi);

a=sayi/100;
b=(sayi/10)%10;
c=sayi%10;
toplam=a+b+c;
printf(" sayinin rakamlari toplami--> %d",toplam);







return 0;
}
