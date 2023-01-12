#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double sayi,sonuc,sonuc2;
	printf("sayi girin :");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("%.0lf",sonuc);
	printf("\n");
	sonuc2=log10(sayi);
	printf("log %.7lf",sonuc2);
	return 0;
}
