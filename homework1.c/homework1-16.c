#include<stdio.h>

int main(){
	
	int sayac, toplam = 0;
	
	sayac = 1000;
	while( sayac<2000 ){
		if( sayac % 2 == 0 ){
	
			printf("\n%d", sayac);
			toplam += sayac;
			sayac++;
		}
		else{
			sayac++;
		}
	}
	
	printf("\nToplam: %d", toplam);
	
	return 0;
	
}
