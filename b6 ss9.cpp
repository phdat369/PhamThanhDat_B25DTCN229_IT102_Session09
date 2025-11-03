#include <stdio.h>
#include <math.h>
int main(){
	int sum=0;
	int count=0;
	float average=0;
	int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			count+=1;
			sum=sum+array[i][j];
		}
	}
	average=(float)sum/count;
	printf("Gia tri trung binh cua mang = %.2f",average);
}
