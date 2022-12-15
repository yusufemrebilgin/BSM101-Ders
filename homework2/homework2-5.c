//	calculate 2^4.

#include<stdio.h>

int main(){
	
	int sayi=2 , sayac=1;
	
	while( sayac < 4 ){
		
		sayi *= 2;
		sayac++;
		
	}
	
	printf("%d", sayi);
	
	return 0;
	
}
