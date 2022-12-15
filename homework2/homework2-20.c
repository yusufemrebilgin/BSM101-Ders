//	S = x - x^3 + x^5 + ...

#include<stdio.h>
#include<math.h>

int main(){
	
	int i, x, terimSayisi;
	double toplam=0;
	
	printf("S = x - x^3 + x^5 + ...\n");
	printf("\nx degeri giriniz:");	scanf("%d", &x);
	printf("\nTerim sayisi giriniz:");	scanf("%d", &terimSayisi);
	
	
	for( i=1 ; i<=2*terimSayisi-1 ; i+=2 ){
		
		if( i==1 )
			toplam += x;
		if( i==3 )
			toplam -= x*x*x;
		if( i>3 )
			toplam += pow(x,i);
	}
	
	printf("\nToplam: %.2lf", toplam);	
	
	return 0;
}
