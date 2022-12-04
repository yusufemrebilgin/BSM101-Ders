//find HCF (Highest Common Factor) of two numbers.

#include<stdio.h>

int main(){
	
	int sayi1 , sayi2 , sayac , ebob;
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi2);
	
	for( sayac = 1 ; sayac <= sayi1 && sayac <= sayi2 ; sayac++ ){
		
		if( sayi1%sayac==0 && sayi2%sayac==0 )
			ebob = sayac;
		
	}
	
	printf("EBOB: %d", ebob);
	
	return 0;
		
}
