//	check whether a number is Perfect number or not.

#include<stdio.h>

int main(){
	
	int number , c = 1 , sum = 0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &number);
	
	while( c < number ){
		
		if( number % c == 0 ){
			sum += c;
			c++;
		}
		else{
			c++;
		}
	
	}
	
	if( sum == number )
		printf("\nGirilen sayi mukemmel sayidir.");
	else
		printf("\nGirilen sayi mukemmel sayi degildir.");
	
	return 0;
}
