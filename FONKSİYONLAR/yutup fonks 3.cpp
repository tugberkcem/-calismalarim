#include <stdio.h>
#include  <stdlib.h>

int toplam(int s1,int s2)
{
int t=s1+s2;
return t;
}
int main() {
	int s1,s2;
	printf("birinci ve ikinci sayiyi giriniz:");
	scanf("%d %d",&s1,&s2);
	int t;
	t=toplam(s1,s2);
	printf("sonuc:  %d",t);
	return 0;
}
