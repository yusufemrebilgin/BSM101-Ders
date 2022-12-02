#include<stdio.h>

int main(){
	
	int low, high;
	printf("low: ");
	scanf("%d", &low);
	printf("high: ");
	scanf("%d", &high);
	
	while( low<=high ){
		printf("\n%d", low);
		low++;
	}
	
	return 0;
	
}
