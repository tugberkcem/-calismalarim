#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("ideal kilo hesaplama");
	printf("\n");
	
	//ideal kilo hesaplama
	//(boy-100+yaþ/10)*0.8-->KADIN  0.9---->ERKEK
	
	float boy,yas,ideal;
	
	printf("boyunuzu giriniz: \n");
	scanf("%f",&boy);
	
	printf("yasinizi giriniz: \n");
	scanf("%f",&yas);
	
	ideal=(boy-100+yas/10)*0.9;
	printf("ideal kilonuz: %f",ideal);
	return 0;
}
