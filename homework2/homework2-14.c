//	print all Strong numbers between 1 to n.

#include<stdio.h>

int main(){
	
	int x , y , sayi , toplam;
	int c, faktoriyel;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	int i = 1;
	
	while( i <= sayi ){
		
		x = i;
		
		toplam = 0;
		
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
	
		if( toplam == i ){
			printf("\n%d", i);
			i++; 
		}
		else{
			i++;
		}
		
	}
	
	return 0;
}
