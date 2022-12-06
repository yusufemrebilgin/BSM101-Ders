//	print all natural numbers in reverse (from n to 1).

#include<stdio.h>

int main(){
	
	
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	while( sayi>=1){
		printf("%d\n", sayi);
		sayi--;
	}
	
	return 0;
}
