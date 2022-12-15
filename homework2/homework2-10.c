//	 print all Armstrong numbers between 1 to n.

#include<stdio.h>

int main(){
	
	int sayac , girilenSayi , toplam , basamak , x , y;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &girilenSayi);
	
	int a ,us;
	sayac = 1;	
	
	while( sayac < girilenSayi ){
		
		x = sayac;
		y = sayac;
		
		basamak = 0;
		
		while( x > 0 ){
			x = x / 10;
			basamak++;
		}
	
		int a , us;	
		toplam = 0;
		
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
		
		if( toplam == sayac ){
			printf("\n%d", sayac);
			sayac++;
		}
		else{
			sayac++; 
		}
						
	}
			
	return 0;
	
}
