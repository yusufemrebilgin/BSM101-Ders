#include<stdio.h>

int main(){
	
	int c, sayi, toplam = 0;
	
	c = 1;
	while( c<=10 ){
		
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayi);
		toplam += sayi;
		c++;
	}
	
	printf("Toplam: %d", toplam);
	
	return 0;
	
}
