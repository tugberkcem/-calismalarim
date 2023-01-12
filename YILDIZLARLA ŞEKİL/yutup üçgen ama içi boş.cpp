#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a,boy,b;
	printf("Boy giriniz: ");
	scanf("%d",&boy);
	b=boy;
	
	for(;boy>=1;boy--){
		for(a=1;a<=boy-1;a++){
			printf(" ");
		}
		for(a=b;a>=boy;a--){
			printf("*");
			printf(" ");
		}
		printf("\n");
}


	
	
	
	
	
	
}
