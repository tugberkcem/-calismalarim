#include <stdio.h>
#include <stdlib.h>
 	enum sehirler
 	{
 		bos,adana,adiyaman,afyon,agri,amasya,ankara,antalya
	 };

int main() {
	
	enum sehirler il;
	il=amasya;
	printf("%d",il);

	return 0;
}
