//Write C Program to Sort Strings in Dictionary Order
#include<stdio.h>
#define SIZE 10
#define MAX 20  //maksimum karakter

int main(){
	
	int x, y, z, i, j, k;;
	char temp, str1[SIZE][MAX];
	
	printf("Enter %d words:\n\n", SIZE);
	for( i=0; i<SIZE ; i++ ){
		scanf("%s", str1[i]);		
	}
		
	j=0;
	for( i=0;i<SIZE-1;i++ ){
		for( k=i+1;k<SIZE;k++ ){
			if( j==0 && str1[i][j]>str1[k][j] )
				for( x=0;x<MAX;x++ ){
					temp = str1[i][x];
					str1[i][x] = str1[k][x];
					str1[k][x] = temp;
				}
			else if( str1[i][j]==str1[k][j] )
				for( y=1; str1[i][y-1]==str1[k][y-1] ;y++){
					if( str1[i][y]>=str1[k][y] )
						for( z=0;z<MAX;z++ ){
							temp = str1[i][z];
							str1[i][z] = str1[k][z];
							str1[k][z] = temp;	
						}
				}
		}
	}
	
	printf("\n\nIn lexicographial order:\n\n");
	for(i=0;i<SIZE;i++){
		for(j=0;str1[i][j]!='\0';j++){
			printf("%c", str1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
