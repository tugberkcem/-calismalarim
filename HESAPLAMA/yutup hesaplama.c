#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int misir,kola,bilet,toplam;
	
	printf("misir adetini giriniz: ");
	scanf("%d",&misir);
	printf("kola adetini giriniz: ");
	scanf("%d",&kola);
	printf("bilet adetini giriniz: ");
	scanf("%d",&bilet);
	toplam=misir*2+kola*3+bilet*8;
	printf("toplam borcunuz: %d",toplam);
	return 0;
}
