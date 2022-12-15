// Calculate the area of a circle with given radius.

#include<stdio.h>

int main(){
	
	float pi = 3.14, alan = 0;
	
	int yaricap;
	printf("Yaricap giriniz: "); scanf("%d", &yaricap);
	
	alan = pi*yaricap*yaricap;
	
	printf("\nAlan: %.2f", alan);
	
	return 0;
}
