#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,sayi;
	int faktor=1;
	
	printf("faktoriyelini alinicak sayiyi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i+=1)
	{
		faktor=faktor*i;
	}
	printf("girdiginiz sayinin faktoriyeli: %d", faktor);
	return 0;
}
	
	
	
	
	
	
	

