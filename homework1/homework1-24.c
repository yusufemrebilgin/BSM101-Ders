//find frequency of each digit in a given integer.

#include<stdio.h>

int main(){
	
	int sayi , sayac , basamak_tekrari = 0 , en_cok_tekrar_eden = 0;
	
	printf("Bir sayi giriniz: ");	scanf("%d", &sayi);
	
	int rakam , degisken;
	
	
	while( sayi > 0 ){
		
		sayac = 0;
		rakam = sayi % 10;
		sayi = sayi / 10;
		degisken = sayi;
		
		while( degisken > 0 ){
			
			if( degisken%10==rakam ){
				sayac++;
			}
			if( sayac > basamak_tekrari ){
				basamak_tekrari = sayac;
				en_cok_tekrar_eden = rakam;
			}
			
			degisken = degisken / 10;
		}	
		
	}
	
	printf("\nEn cok tekrar eden: %d", en_cok_tekrar_eden);

	return 0;
	
}
