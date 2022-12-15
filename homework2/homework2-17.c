//	S = 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n

#include<stdio.h>

int main(){
	
	double sayi , sayac , toplam = 0;
	
	printf("1 + 1/2 + 1/3 + ... + 1/n\n");
	printf("\nBir n degeri giriniz: ");
	scanf("%lf", &sayi);
	
	for( sayac = 1 ; sayac <= sayi ; sayac++ ){
		
		toplam = toplam + ( 1 / sayac );
		
	}
	
	printf("\nToplam: %lf", toplam);
	
	return 0;
	
}
