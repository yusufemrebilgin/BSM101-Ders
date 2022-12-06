//	print the SUM of numbers from LOW to HIGH. 

#include<stdio.h>

int main(){
	
	int low,high,sum=0;
	
	printf("low: ");
	scanf("%d", &low);
	printf("high: ");
	scanf("%d", &high);
	
	while( low<=high ){
			sum += low;
			low++;
	}
	
	printf("%d", sum);
	
	return 0;
	
}
