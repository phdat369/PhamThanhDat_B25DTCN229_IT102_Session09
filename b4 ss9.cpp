#include <stdio.h>
#include <math.h>
int main(){
	int array[2][3]={{2,99,4},{87,6,4}};
	int max=array[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(array[i][j]>max){
				max=array[i][j];
			}
		}
	}
	printf("So lon nhat trong mang la : %d",max);
}
