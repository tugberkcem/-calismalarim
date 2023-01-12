#include <stdio.h>
#include <stdlib.h>

int main() {
	int en,boy,i,j;
	
	printf("dikdortgenin boy degerini girini>>>>");
	scanf("%d",&boy);
	
	printf("dikdortgenin en degerini giriniz>>>>");
	scanf("%d",&en);
	
	for(i=1;i<boy;i+=1)
	{
		for(j=1;j<en;j+=1)
		{
			printf("*");
		}
		printf("\n");	
	}
	return 0;		
}
