//Write C Program to Concatenate Two Strings.

#include<stdio.h>

int main(){
	
	int i,j;
	char str1[20], str2[20];
	printf("Enter first string: "); scanf("%s", str1);
	printf("Enter second string: "); scanf("%s", str2);

	for(i=0; str1[i]!='\0'; i++);
	
	for( j=0 ; str2[j]!='\0' ; j++ ){
		str1[i++] = str2[j];
	}
	str1[i] = '\0';
	
	puts(str1);
	
	return 0;
}
