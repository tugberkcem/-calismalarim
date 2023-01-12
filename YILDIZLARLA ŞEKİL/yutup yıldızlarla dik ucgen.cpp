#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int taban,i,j;
	printf("ucgenin taban uzunlugunu girin>>>>");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i+=1)
	{
		for(j=1;j<=i;j+=1)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
