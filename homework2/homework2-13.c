//	check whether a number is Strong number or not.

#include<stdio.h>

int main(){
	
	int x , y , sayi , toplam = 0;
	int c, faktoriyel;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	x = sayi;
	
	
	while( x > 0 ){
		
		y = x % 10;
		x = x / 10;
		
		c = 1 , faktoriyel = 1;
		while( c <= y ){
			faktoriyel = faktoriyel * c;
			c++;
		}
		toplam += faktoriyel;
	}
	
	if( toplam == sayi )
		printf("\nStrong sayidir.");
	else
		printf("\nStrong sayi degildir.");
	
	
	return 0;	
}
