// Determine and Output Whether Number N is Even or Odd.

#include<stdio.h>

int main(){
	
	int sayi;
	
	printf("Bir sayi giriniz: "); scanf("%d", &sayi);
	
	if( sayi%2==0 )
		printf("Sayi cifttir.");
	else
		printf("Sayi tektir.");
		
	return 0;
}
