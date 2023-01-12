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
    	case 13 ... 16:
    		printf("Odenecek Tutar 20 TL");
    	break;
    	case 17 ... 20:
    		printf("odenecek tutar 25 tl");
    		break;
    }
    printf("\n***iyi gunler dileriz***");
    
	return 0;
}
