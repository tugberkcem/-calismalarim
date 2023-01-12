#include <stdio.h>
#include <stdlib.h>

int main() {
	int el,normal,normaltutar,eltutar,toplam;
	
	printf("el bagaji icin kac kg tasincak-->");
	scanf("%d",&el);
	
	printf("normal bagaj icin kac kg tasincak-->");
	scanf("%d",&normal);
	
	if(normal<15)
	{
		normaltutar=0;
	}
	else
	{
		normaltutar=(normal-15)*5;
	} 
	if(el<8)
	{
		eltutar=0;
	}
	else
	{
		eltutar=(el-8)*4;	
	}
	printf("normaltutar--> %d",normaltutar);
	printf("\n");
	printf("eltutar--> %d",eltutar);
	printf("\n");
	toplam=eltutar+normaltutar;
	printf("toplamtutar-->%d",toplam);
	
	return 0;
}
