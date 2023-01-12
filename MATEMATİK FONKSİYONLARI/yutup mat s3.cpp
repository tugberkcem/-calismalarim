#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	
	double sayi,sonuc1,sonuc2;
	printf("sayi girin: ");
	scanf("%lf",&sayi);
	
	sonuc1=floor(sayi);
	printf("sonuc1:%.3lf ",sonuc1);
	printf("\n");
	sonuc2=ceil(sayi);
	printf("sonuc2: %.3lf",sonuc2);
	
	return 0;
}
