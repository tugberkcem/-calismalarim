#include <stdio.h>

	int toplam(int s1,int s2)
	{
		int s3;
		s3=(s1+s2)*4-10;
		return s3;
	}
	int  main() {
		int t;
		t=toplam(4,9);
		printf("%d\n",t);
		t=toplam(2,3);
		printf("%d",t);
	}
