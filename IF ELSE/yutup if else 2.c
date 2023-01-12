#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//klavyeden girilen sayinin 5'e  bölünüp bölünmedigini bulan
	
	int x;
	printf("sayiyi girin: \n\n\n\n ");
	scanf("%d",&x);
	
	if(x%5==0)
	{
		printf("sayi 5'e tam bolunur");	
	}
	else
	{
		printf("sayi 5'e tam bolunmez");
	}
	return 0;
}
