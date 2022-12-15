// find the number and sum of all integer between 100 and 200 which are divisible by 9.

#include<stdio.h>

int main(){
	
	int sayac = 100, toplam=0;
		
	for( sayac ; sayac < 200 ; sayac++ ){
		
		if( sayac % 9 == 0 ){
			printf("%d\n", sayac);
			toplam += sayac;
		}
	}
	
	printf("\nToplam: %d", toplam);
	
	return 0;
}
