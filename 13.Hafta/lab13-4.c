//İki ayrı fonksiyon oluşturarak bir tamsayının asal sayı mı yoksa Armstrong mu yoksa her ikisi mi olduğunu kontrol etmeyi sağlayan programı yazınız.

#include<stdio.h>
#include<math.h>

int asalKontrol(int);
int armstrongKontrol(int);

int main(){
	
	int n, x, y;
	printf("Bir sayi giriniz: "); scanf("%d", &n);
	
	x = asalKontrol(n);
	y = armstrongKontrol(n);
	
	if( x && y )
		printf("\nGirilen sayi hem asal sayi hemde Armstrong sayisidir.");
	else if( x )
		printf("\nGirilen sayi sadece asaldir.");
	else  if( y )
		printf("\nGirilen sayi sadece Armstrong sayisidir.");
	else 
		printf("\nGirilen sayi asal sayi ve Armstrong sayisi degildir.");
	
	return 0;
}

int asalKontrol(int x){
	
	int c;
	for( c=2; c<x ;c++ ){
		if(x%c==0)
			return 0;
	}
	return 1;
}

int armstrongKontrol(int x){
	
	int sayi, a, b, toplam=0, basamak=0;
	a = x;
	sayi = x;
	
	for(basamak;a>0;basamak++){
		a = a/10;
	}
	while( x>0 ){
		b = x%10;
		x /= 10;
		toplam += pow(b,basamak);
	}
	if(toplam==sayi)
		return 1;
	else 
		return 0;
}
