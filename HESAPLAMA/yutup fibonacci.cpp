#include <stdio.h>
#include <stdlib.h>

int main() {
	// fibonacci sayisi makarasý.
	int a,b,c,i;
	a=1;
	b=1;
	for(i=1;i<=8;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d \n",c);

	}

	
	return 0;
	
}
