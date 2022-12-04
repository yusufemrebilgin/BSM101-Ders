#include<stdio.h>

int main(){
	
	double sayi , sayac , toplam = 0;
	
	printf("Ikinin kati bir sayi giriniz: ");
	scanf("%lf", &sayi);
	
	for( sayac = 2 ; sayac <= sayi ; sayac = sayac + 2 ){
		
		toplam = toplam + ( 1 / sayac );
		
	}
	
	
	printf("\nToplam : %lf ", toplam);
	
	return 0;
	
}
