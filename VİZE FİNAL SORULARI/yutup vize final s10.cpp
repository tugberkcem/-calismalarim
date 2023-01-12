#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int skor[10]={2,1,0,0,2,1,1,2,1,0};
	int i,puan=0;
	
	for(i=0;i<10;i++)
	{
		if(skor[i]==2)
		{
			puan=puan+3;
		}
		if(skor[i]==0)
		{
			puan=puan+1;
		}
		
	}
	if(puan>=12)
	{
		printf("kumeden kurtuldunuz");
	}
	else
	{
		printf("kume dustunuz");
	}
	printf("\n");
	printf("toplam puan: %d",puan);
	
return 0;
}
