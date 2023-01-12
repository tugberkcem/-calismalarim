#include <stdio.h>
#include <stdlib.h>
/*
int main() {
	 3 basamaklý rakamlaarý birbirinden farklý kaç tane tamsayý var
	int sayac=0;
	int i;
	int a,b,c;
	
	for(i=100;i<999;i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		if(a!=b && a!=c && b!=c)
		{
			sayac++;
		}
	}
	printf("%d",sayac);
	
	
	//234
	return 0;
}
*/
int main () {
	int i,sayi;
	
	printf("sayi girin-->");
	scanf("%d",sayi);
	
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			printf("tam bolenler : %d\n",i);
		}
		
	}	
	
	return 0;
}
