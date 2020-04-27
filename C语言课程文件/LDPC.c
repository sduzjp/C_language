#include<stdio.h>
void main(){
	int LDPC[50][100];
	int i,j;
	for (i=0;i<=16;i++){
		for(j=0;j<=99;j++){
			LDPC[i][j]=0;
		}
	}
	for (i=0;i<=16;i++){
		for(j=0;j<=99;j++){
			printf("%d ",LDPC[i][j]);
		}
		printf("\n");
	}
} 
