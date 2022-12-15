//1-X^2/2!+X^4/4!- ........		

#include<stdio.h>
#include<math.h>

int main(){
	
	int terimSayisi;
	int X;
	printf("1 - X^2/2! + X^4/4! - ...\n");
	printf("\nX degeri giriniz: ");
	scanf("%d", &X);
	printf("Terim sayisi giriniz: ");
	scanf("%d", &terimSayisi);
	
	int i, c, faktoriyel, siraSayisi=2; 
	double toplam = 1;
	
	for( i=2 ; i<=(terimSayisi-1)*2 ; i+=2 ){
		
		c = 1 , faktoriyel = 1;
		while( c <= i ){
			faktoriyel = faktoriyel * c;
			c++;
		}
		if(siraSayisi%2==0){
			toplam -= pow(X,i) / faktoriyel;
		}
		else{
			toplam += pow(X,i) / faktoriyel;
		}
		siraSayisi++;
	}

	
	printf("\nToplam: %.3lf", toplam);
	
	return 0;
}
