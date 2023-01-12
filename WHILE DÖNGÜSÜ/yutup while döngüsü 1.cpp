#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi,faktoryel;
	printf("faktoryel almak istediginiz sayiyi girin.");
	scanf("%d",&sayi);
	faktoryel=1;
	
	while(sayi>1) 
	{
		faktoryel=faktoryel*sayi;
		sayi--;
	}
	printf("sonuc: %d",faktoryel);
	return 0;
	
}
