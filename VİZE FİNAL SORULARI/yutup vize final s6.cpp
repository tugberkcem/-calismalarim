#include <stdio.h>
#include <stdlib.h>
int main() {

int saat;
    printf("Kac Saat Kaldiniz: ");
    scanf("%d",&saat);
    switch(saat)
    {
    	case 0 ... 4:
    		printf("Odenecek Tutar 10 TL");
    	break;
    	case 5 ... 8:
    		printf("Odenecek Tutar 12 TL");
    	break;
    	case 9 ... 12:
    		printf("Odenecek Tutar 15 TL");
    	break;
    	default:
    		printf("Odenecek Tutar 20 TL");
    	break;
    }
    printf("\n***iyi gunler dileriz***");
    
	return 0;
}
