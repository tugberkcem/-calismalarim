#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// 1 ile 10 arasindaki say�lari list. prog.
	// 1 ile 20 arasindaki �ift sayilari list. ancak 14� alma
	
	int x;
	x=1; 
	while(x<=20)
	{
		if(x%2==0 && x!=14)
	{
		printf("%d \n",x);
	}
		x++;	
	}
	x++;
	
	return 0;
	
}
