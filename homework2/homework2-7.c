//	print all Prime numbers between 1 to n.

#include<stdio.h>

int main(){
	
	int sayi , sayac , c ;

	printf("1'den girilen sayiya kadar olan asal sayilar: \n");
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	
	for( sayac = 1 ; sayac <= sayi ; sayac++ ){
		
		c = 2;
		while( c <= sayac ){
			
			if( sayac % c == 0 ){
				
				if( sayac == c ){
					printf("\n%d", sayac); break;
				}
				else{
					break;
				}
			}
			
			else{
				c++;
			}
			
		}
				
	}
			
	return 0;
}


