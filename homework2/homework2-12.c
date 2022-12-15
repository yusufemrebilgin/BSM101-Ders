//	print all Perfect numbers between 1 to n.

#include<stdio.h>

int main(){
	
	int number , c = 1;
	int a, sum;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &number);	
	
	while( c < number ){
	
		a = 1;
		sum = 0;
		
		while( a < c ){
		
			if( c % a == 0 ){
				sum += a;
				a++;
			}
			else{
				a++;
			}
			
		}
	
		if( sum == c ){
			printf("\n%d", c);
			c++;
		}
		else{
			c++;
		}
		
	}
	
	return 0;
}
