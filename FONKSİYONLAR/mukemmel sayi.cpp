#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int sayi,i,toplam;
	toplam=0;
	

	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
				
		}
		
	
	}
	
			if(toplam==sayi)
				{
				printf("mukemmel sayidir");
				}
			else
				{
				printf("mukemmel sayi degildir");
				}
		
	
	 return 0;
	}
