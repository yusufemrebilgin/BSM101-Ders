// Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].

#include<stdio.h>
#include<math.h>

int main(){
	
	int i, j, faktoriyel, x, terimSayisi;
	double toplam=1;
	
	printf("S = 1 + x + x^2/2! + x^3/3! + ...\n");
	printf("\nx degeri giriniz: ");	scanf("%d", &x);
	printf("Terim sayisi giriniz: ");	scanf("%d", &terimSayisi);
		
	for( i=1 ; i<=terimSayisi-1 ; i++ ){
		
		j=1, faktoriyel=1;
		while( j<=i ){
			faktoriyel = faktoriyel*j;	
			j++;
		}
		toplam += pow(x,i) / faktoriyel;
	}
	
	printf("\nToplam: %.3lf", toplam);	
	
	return 0;
}
