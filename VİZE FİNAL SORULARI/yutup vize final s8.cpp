#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,taban,j;
	printf("ucgenin taban uzunlugunu giriniz  :");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
