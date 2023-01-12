#include <stdio.h>

	int toplam(int s1,int s2)
	{
		int s3;
		printf("sayi giriniz: ");
		scanf("%d",&s1);
		printf("sayi giriniz yeniden: ");
		scanf("%d",&s2);
		s3=s1+s2;
		return s3;
	}
	int main() {
		int s1,s2;
		int t;
		t=toplam(s1,s2);
		printf("toplam= %d",t);
	}
