#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//sýnav notu girilen öðrencinin not harfini açýklayan...
	
	int x;
	
	printf("sinav notu giriniz:");
	scanf("%d",&x);
	
	if(x<50)
	{
		printf("ogrencinin notu>>>ff");
	}
	if(x>=50 && x<60)
	{
		printf("ogrencinin notu>>>dd");
	}
	if(x>=60 && x<=70)
	{
		printf("ogrencinin notu>>>cc");
	}
	if(x>70 && x<=85)
	{
		printf("ogrencinin notu>>>bb");
	}
	if(x>85)
	{
		printf("ogrencinin notu>>>aa");
	}
	
	
	
	return 0;
}
