#include <stdio.h>
#include <math.h>
int main(){
	int sum=0;
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("\nCac phan tu trong duong cheo chinh la : ");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				printf(" %d",array[i][j]);
				sum+=array[i][j];
			}
		}
	}
	printf("\nTong cac so trong duong cheo chinh = %d",sum);
}
