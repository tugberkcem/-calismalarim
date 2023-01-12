#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int kare,alan,kenar,cevre;
	
	printf("karenin kenarini giriniz: \n\n");
	scanf("%d",&kenar);
	
	cevre=kenar*4;
	alan=kenar*kenar;
	
	printf("Karenin alani=%d\n",alan);
	printf("karenin cevresi=%d",cevre);
		return 0;
}
