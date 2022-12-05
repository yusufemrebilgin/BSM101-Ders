// convert a decimal number, n, to binary format.

#include<stdio.h>

int main(){
	
	int decimal;
	printf("Donusum icin bir sayi giriniz: ");
	scanf("%d", &decimal);	
	
	int sonuc = 0;
	int x = 1;
	
	while( decimal > 0 ){
				
		sonuc += (decimal%2)*x;
		x = x*10;	
		decimal /= 2;	
	}
	
	printf("\nSonuc: %d", sonuc);

	return 0;
}
