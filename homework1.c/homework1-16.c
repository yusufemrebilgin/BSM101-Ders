//Design an algorithm which generates even numbers between 1000 and 2000 and then prints them in the standard output. 
//It should also print total sum.

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
	
	printf("\n");
	printf("\nToplam: %d", toplam);
	
	return 0;
	
}
