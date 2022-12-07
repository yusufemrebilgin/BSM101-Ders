//		add two numbers entered by user.

#include<stdio.h>

int main(){
	
	
	int a, b , toplam = 0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &a);
	printf("Bir sayi giriniz: ");
	scanf("%d", &b);
	
	toplam = a + b;
	printf("Toplam: %d", toplam);
	
	return 0;
	
	
}
