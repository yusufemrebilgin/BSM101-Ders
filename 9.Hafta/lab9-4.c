// Write a C program to check whether a given number from keyboard is Palindrome number or not.

#include<stdio.h>

int main(){
	
	int x, y, sayi, yenisayi=0;
	printf("Bir sayi giriniz: "); scanf("%d", &sayi);
	
	x=sayi;
	
	while( x>0 ){
		y = x%10;
		yenisayi = y + ( yenisayi*10 );
		x = x/10;
	}
	
	if( sayi==yenisayi )
		printf("\nPalindromik sayidir.");
	else
		printf("\nPalindromik sayi degildir.");
	
	return 0;
} 
