//	print the multiplication table for 6's.

#include<stdio.h>

int main(){
	
	int sayi, sayac, carpim;
	
	sayi = 6;
	
	for( sayac=1; sayac<=10; sayac++){
		carpim = sayac * sayi;
		printf("\n%d", carpim);
	}
	
	return 0;
	
}
