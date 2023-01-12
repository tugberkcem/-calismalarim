#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	
	double sonucsin,derece,sonuccos;
	printf("derece girin :");
	scanf("%lf",&derece);
	sonucsin=sin(derece);
	printf("sonuc sin :%lf",sonucsin);
	sonuccos=cos(derece);
	printf("sonuc cos :%lf",sonuccos);
	

	
	return 0;
}
