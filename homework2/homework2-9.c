//	check whether a number is Armstrong number or not.

#include<stdio.h>

int main(){
	
	int sayi , basamak=0 , toplam=0 , x , y;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	x = sayi;
	y = sayi;
	
	while( x > 0 ){
		x = x / 10;
		basamak++;
	}
	
	int a , us;	
	while( y > 0 ){
		
		a = y % 10;
		y = y / 10;
		us = a;
		
		int c = 1;
		while( c < basamak ){
			a *= us;
			c++;
		}	
		toplam += a;
	}
	
	
	if( toplam == sayi ){
		printf("\nArmstrong sayisidir.");
	}
	else{
		printf("\nArmstrong sayisi degildir.");
	}
			
	return 0;
}
