#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s1,s2,ort;
	
	printf(" ogrenci not hesaplama sistemi:");
	printf("\n\n");
	
	printf("vize notunu giriniz");
	scanf("%d",&s1);
	
	printf("final notunu giriniz");
	scanf("%d",&s2);
	
	ort= (s1+s2)/2;
	
	printf("donem sonu ortalamaniz : %d \n\n",ort);
	
	if(ort>=50)
	{
		printf("tebrikler gectiniz:)");
	}
	else
	{
		printf("maalesef kaldin kanka:(");
	}
	
	
	
	return 0;
}
