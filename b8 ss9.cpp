#include <stdio.h>
#include <math.h>
int main(){
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	int j=2; //=(n-1)
	printf("\nCac so phan tu trong duong cheo phu : ");
	for(int i=0;i<3;i++){
		printf(" %d ",array[i][j]);
		sum+=array[i][j];
		j--;
	}
	printf("\nTong cac phan tu tren duong cheo phu : %d",sum);
}
