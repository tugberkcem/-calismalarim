#include <stdio.h>
#include <stdlib.h>
#include <time.h>


	void zar_at()
	{
		srand(time(NULL));
		int deger= rand()%7;
		printf("%d\n",deger);
	
	}
	void kontrolet(int sayi)
	{
		if(sayi%2==0)
		{
			printf("%d sayisi cifttir\n",sayi);
		 } 
		 else
		 {
		 	printf("%d sayisi tektir\n",sayi);
		 }
	}
	void kutuciz(int en,int boy)
	{
		for(int i=0;i<en;i++)
		{
			for(int j=0;j<boy;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
		
		
	}
	
	int main(){
		
		zar_at();
		int s,en,boy;
		printf("bir sayi  giriniz: ");
		scanf("%d",&s);
		kontrolet(s);
		printf("en degeri giriniz: ");scanf("%d",&en);
		printf("boy degeri giriniz ");scanf("%d",&boy);
		kutuciz(en,boy);
		return 0;
	}
