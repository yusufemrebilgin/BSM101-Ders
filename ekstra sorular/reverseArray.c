// Write C program to find reverse of the given array.

#include<stdio.h>

int main(){
	
	int SIZE;
	scanf("%d", &SIZE);
	int i, j, array[SIZE];
	
	for( i=0 ; i<SIZE ; i++ ){
		printf("%d) ", i+1); scanf("%d", &array[i]);
	}
	
	j = SIZE-1;
	for( i=0 ; i<SIZE/2 ; i++ ){
		array[i] = array[i] + array[j];
		array[j] = array[i] - array[j];
		array[i] = array[i] - array[j];
		j--;
	}
	
	printf("\n");
	for( i=0 ; i<SIZE ; i++ ){
		printf("%d ", array[i]);
	}
	
	return 0;
}
