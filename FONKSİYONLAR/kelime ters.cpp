#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char kelime[5][5];
	printf("kelime giriniz: ");
	scanf("%s",&kelime);
	
	int i,j;
	int uzunluk;
	uzunluk=strlen(kelime[5][5])/2;
	for(i=0;i<5;i++)
	{
		for(j=5;j<6;j--)
		{
			strrev(kelime[i][j]);
		}
		printf("%s",kelime);
	}
	return 0;
}

