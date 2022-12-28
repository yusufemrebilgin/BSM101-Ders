//Write C Program to Remove all Characters in a String Except Alphabet

#include<stdio.h>

int main(){
	
	int i, j, k;	
	char str1[40],str2[40];
	int number[40];
	printf("Enter a string: "); gets(str1);
		
	for( i=0; str1[i]!='\0' ; i++ ){
		number[i] = str1[i];
	}
	
	for( j=0, k=0 ; j<i ; j++ ){
		if( (number[j]<=90 && number[j]>=65) || (number[j]>=97 && number[j]<=122) ){
			str2[k] = number[j];
			k++;
		}
	}

	str2[k] = '\0';
	puts(str2);	
	
	return 0;
}
