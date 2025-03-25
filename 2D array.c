/*
Author:Keziah Mutheu Mutiso
Reg  no:D33-5020-2023
2D arrays
Date:20/3/2025
*/
#include<stdio.h>
int main(){
	int i,j;
	int marks[3][2]={
	{9,8},
	{7,6},
	{1,2}	
	};
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",marks[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
