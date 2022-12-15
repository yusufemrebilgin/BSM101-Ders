//find the sum of the series 1 +11 + 111 + 1111 + .. n terms

#include<stdio.h>

int main(){
	
	int i, j, sayi, terimSayisi, toplam=0;
	
	printf("1 + 11 + 111 + 1111 + ... + n\n");
	printf("\nTerim sayisi giriniz: ");
	scanf("%d", &terimSayisi);
	
	for( i=1 ; i<=terimSayisi ; i++ ){
		
		sayi = 0;
		for(	j=1 ; j<=i ; j++ ){
			sayi = 1 + (sayi*10);
		}
		toplam += sayi;
	}
	
	printf("Toplam: %d", toplam);
	return 0;
}
