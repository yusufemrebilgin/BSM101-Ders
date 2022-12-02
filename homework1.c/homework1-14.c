#include<stdio.h>

int main(){
	
	int sayac, sayi, faktoriyel = 1;

	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	sayac = 1;	
	while( sayac<=sayi){
		faktoriyel = faktoriyel * sayac;
		sayac++;
	}
	printf("Sonuc: %d", faktoriyel);
	
	return 0;
	
}
