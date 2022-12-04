//find frequency of each digit in a given integer.

#include<stdio.h>

int main(){
	
	int sayi, sayac = 0, en_cok_tekrar_eden = 0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	int x , y;
	x = sayi;
	
	
	while( x > 0 ){
		
		y = sayi % 10;
		
		while( sayi > 0 ){
			
			if( sayi%10==y )
				sayac++;
			if( sayac >= en_cok_tekrar_eden )
				en_cok_tekrar_eden = y;

			sayi = sayi / 10;
			
		}
		
		x = x / 10;
		
	}
	
	printf("\nEn cok tekrar eden sayi: %d", en_cok_tekrar_eden);
	
	return 0;
	
	
}
