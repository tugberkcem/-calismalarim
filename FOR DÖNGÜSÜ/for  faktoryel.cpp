#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int faktoryel,i,sayi;
	int sayilar[]={1,2,3,4,5,6,7};
	printf("1 ile 7 arasinda faktoryelini hesapliganiz sayiyi girin>>>");
	scanf("%d",&sayi);
	faktoryel=1;
	for(i=1;i<sayi;i++)
	{
		faktoryel=faktoryel*sayilar[i];
	}
	printf("girdiginiz sayinin faktoryeli: %d \n",faktoryel);
	return 0;
}
