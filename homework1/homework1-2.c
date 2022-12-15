// 	Calculate the area of a circle with given radius.

#include<stdio.h>

int main(){
	
	float yaricap, pi, alan;
	
	pi = 3.14;
	printf("Yaricap giriniz: ");
	scanf("%f", &yaricap);
	
	alan = pi*yaricap*yaricap;
	
	printf("Alan: %.2f", alan);
	
	return 0;
	
}
