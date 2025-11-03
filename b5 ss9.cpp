#include <stdio.h>
#include <math.h>
int main(){
	int sum=0;
	int array[3][3]={{1,9,3},{7,9,6},{7,10,9}};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0 || i==2){
				printf(" %d ",array[i][j]);
				sum+=array[i][j];
			}
			else if(i==1 && j==1){
				printf("   ");
			}
			else {
				printf(" %d ",array[i][j]);
				sum+=array[i][j];
			}
			}
		printf("\n");
	}
	printf("Tong cac so o bien la = %d",sum);
}

