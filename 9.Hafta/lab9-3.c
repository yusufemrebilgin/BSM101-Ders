// Write a C program which generates even numbers between 1000 and 2000 and then prints them.

#include<stdio.h>

int main(){
	
	int sayac=1000;
	
	while( sayac<2000 ){
		if( sayac%2==0 ){
			printf("\n%d", sayac);
			sayac++;
		}
		else
			sayac++;
	}
	
	return 0;
}
