// Write C program to find reverse of the given array.

#include<stdio.h>
#define SIZE 5

int main(){
	
	int i, j, array[SIZE];
	
	for( i=0 ; i<SIZE ; i++ ){
		printf("[%d]: ", i); scanf("%d", &array[i]);
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
