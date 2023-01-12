#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi1,sayi2,i,buyuk,kucuk,toplam=0;
	yeniden:
	printf("1.sayiyi girin-->");
	scanf("%d",&sayi1);
	printf("2.sayiyi girin-->");
	scanf("%d",&sayi2);
	if(sayi1==sayi2)
	{
		goto yeniden;
	}
	else
	{
		if(sayi1>sayi2)
		{
			kucuk=sayi2;
			buyuk=sayi1;
		}
		else
		{
			kucuk=sayi1;
			buyuk=sayi2;
		}
		for(i=kucuk;i<=buyuk;i++)
		{
			toplam=toplam+i;
		}
	}
	printf("toplam=%d",toplam);
	return 0;
}
