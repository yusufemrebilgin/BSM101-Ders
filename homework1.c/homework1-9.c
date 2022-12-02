#include<stdio.h>

int main(){
	
	int low=0,high=0,number=0;
	
	printf("low: ");		
	scanf("%d", &low);
	
	printf("high: ");		
	scanf("%d", &high);
	
	printf("number: ");	
	scanf("%d", &number);
	
	
	while( low<=high){
			
			if( low%number==0 )
				printf("\n%d", low);
				low++;
			if( low%number!=0 )
				low++;
			
	}
	
	
	return 0;
	
}
