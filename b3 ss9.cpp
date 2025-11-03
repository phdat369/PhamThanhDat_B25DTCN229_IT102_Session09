#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	int array[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("\narray[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(int a=0;a<n;a++){
		for(int b=0;b<n;b++){
			printf(" %d ",array[a][b]);
		}
		printf("\n");
	}
}
