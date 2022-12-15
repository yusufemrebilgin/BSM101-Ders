//	find all the roots of a quadratic equation ax^2+bx+c=0.


#include<stdio.h>
#include<math.h>

int main(){

	int a , b , c; 
	double diskriminant;
	double x, x1, x2;
	
	printf("ax^2 + bx + c = 0\n");	
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);
	
	diskriminant = b * b - 4 * a * c;
	
	
	if( diskriminant >= 0 ){
		
		if( diskriminant >0 ){
			x1 = ( -b + sqrt(diskriminant) ) / (2 * a);
			x2 = ( -b - sqrt(diskriminant) ) / (2 * a);
			
			printf("\nIki reel kok vardir.");
			printf("\nkok1: %.2lf", x1);
			printf("\nkok2: %.2lf", x2);
		}
		else{
			x = ( -b ) / (2 * a);
			printf("\nEsit iki kok vardir.");
			printf("\nkok: %.2lf", x);	
		}
		
	}
	else{	
	
		printf("\nReel kok yoktur.");
	
	}
	
	return 0;
}
