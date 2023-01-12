#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j;
	int matris[2][3]={10,20,30,40,50,60};
	
	for(i=0;i<2;i+=1)
	{
		for(j=0;j<3;j+=1)
		{
			printf(" %d", matris[i][j]);
		}
		printf("\n\n");
	}

	return 0;
	
}
