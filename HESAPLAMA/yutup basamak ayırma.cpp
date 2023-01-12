#include <stdio.h>
#include <stdlib.h>

int main () {
	
	
	int x,yuzler,onlar,birler;
	
	printf("3 basamakli bir sayi giriniz:\n");
	scanf("%d",&x);
	
	if(x>100)
	{
	
	
	yuzler=x/100;
	printf("yuzler: %d",yuzler);
	 	printf("\n");
	onlar=x/10;
	onlar=onlar%10;
	printf("onlar: %d",onlar);
		 printf("\n");

	birler=x%10;
	printf("birler: %d",birler);
}
else
{
	printf("hatali sayi girisi....");
}
	
	return 0;
	
}
