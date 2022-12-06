//check whether a number is palindrome or not.

#include<stdio.h>

int main(){

	int sayi, yenisayi=0;
	
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	int x, y;
	x = sayi;
	
	while( x>0 ){ 
    	
			y = x % 10;
			yenisayi = y + ( yenisayi*10);
			x = x / 10;

	} 
             
    if( sayi == yenisayi )
    	printf("Palindromik sayidir.");
    else	
    	printf("Palindromik sayi degildir.");
             
             
 	return 0;  
             
}



