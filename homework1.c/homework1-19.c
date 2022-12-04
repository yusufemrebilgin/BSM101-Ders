//	print multiplication table of any number.

#include<stdio.h>

int main(){
	
	int sayi, sayac, carpim;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	sayac = 1;
	while( sayac<=10 ){
		
		carpim = sayac * sayi;
		printf("%d\n", carpim);
		sayac++;
		
	}
	
	return 0;
	
}
