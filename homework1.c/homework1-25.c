#include<stdio.h>

int main(){
	
	int sayi1 , sayi2 , x;
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi2);
	
	x = sayi1 % sayi2;
	
	if( x != 0 ){
		sayi1 = sayi2;
		sayi2 = x;
	}
	
	else{
		printf("EBOB: %d", sayi2);
	}
	
	return 0;
		
}
