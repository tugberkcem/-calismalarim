#include <stdio.h>
#include <stdlib.h>
int main () {
	int i,sayi;
	
	printf("sayi girin-->");
	scanf("%d",&sayi);
	printf(" tam bolunenler:\n");
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			printf("  %d\n",i);
		}
		
	}	
	
	return 0;
}
