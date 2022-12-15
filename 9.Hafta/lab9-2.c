// Write a C program for computing factorial N (N!).

#include<stdio.h>

int main(){
	
	int sayac, sayi, faktoriyel = 1;

	printf("Bir sayi giriniz: "); scanf("%d", &sayi);
	
	sayac = 1;	
	while( sayac<=sayi){
		faktoriyel = faktoriyel * sayac;
		sayac++;
	}
	printf("\nSonuc: %d", faktoriyel);
	
	return 0;
}
