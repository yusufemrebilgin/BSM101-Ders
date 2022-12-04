//	read 10 numbers from the user and prints out their sum, and their product.

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
