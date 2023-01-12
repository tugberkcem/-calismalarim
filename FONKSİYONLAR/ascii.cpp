#include <stdio.h>
#include <stdlib.h>

	void karakter(int a)
	{

		int ascii;
		ascii=printf("ascii degeriniz=%d",a);
		
	}
	
	int main(){
		char harf;
		printf("ascii degerini istediginiz harf veya sembolu giriniz :");
		scanf("%c",&harf);
		karakter(harf);
		
		return 0;
		}
