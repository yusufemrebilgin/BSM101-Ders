#include<stdio.h>

int main(){
	
	int sayi, basamak=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	while( sayi>0 ){
		
		sayi = sayi/10;
		basamak++;
		
	}
	
	printf("Basamak sayisi: %d", basamak);
	
	return 0;
	
}
