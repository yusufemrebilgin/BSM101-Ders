//Write C Program to Count the Number of Vowels, Consonants and so on

#include<stdio.h>

int main(){
	
	int i, j, n, harf=0, rakam=0, sesliHarf=0, sessizHarf=0, bosluk=0;
	int strAscii[40], sesli[10] = { 'A','a','E','e','I','i','O','o','U','u' };
	char str[40];
	
	printf("String giriniz: "); gets(str);
	
	for( n=0 ; str[n]!='\0' ; n++ ){
		strAscii[n]=str[n];
	}
		
	for( i=0 ; i<n ; i++ ){
	
		if( (strAscii[i]<=90 && strAscii[i]>=65) || (strAscii[i]>=97 && strAscii[i]<=122) ){
			for( j=0 ; j<10 ; j++ ){
				if( strAscii[i]==sesli[j] )
					sesliHarf++;
			}
			harf++;	
		}		
		else if( strAscii[i] == 32 )
			bosluk++;
		else if( strAscii[i]<58 && strAscii[i]>47 )
			rakam++;
	}
	sessizHarf = harf - sesliHarf;
	
	printf("\nSesli harf: %d", sesliHarf);
	printf("\nSessiz harf: %d", sessizHarf);
	printf("\nRakam: %d", rakam);
	printf("\nBosluk: %d", bosluk);
	
	return 0;
}
