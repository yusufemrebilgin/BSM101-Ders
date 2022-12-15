//	print the Floyd's Triangle.

#include<stdio.h>

int main(){
	
	int i, j, k;
	
	for(i=1 ; i<15 ; i++){
		
		if( i%2==1 ){
			printf("1"); 
			
			for( j=2; j<=i ; j++){
				if( j%2==0)
					printf("0");
				else
					printf("1");
			}
		}
		
		else{
			printf("0");
			
			for( j=2; j<=i ; j++){
				if( j%2==0)
					printf("1");
				else
					printf("0");
			}
		}							
		printf("\n");
	}
	
	return 0;
}
