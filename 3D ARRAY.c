/*
Author:Kezuah Mutheu Mutiso
Reg no :D33-5020-2023
3D array
Date:20/3/2025
*/
#include<stdio.h>
int main(){
	int i,m,n;
	int  marks[2][2][3]= {
	{
	{41,42,43},
	{44,45,46}
	},
	{
	{47,48,49},
	{50,51,52}
	}
	};
    //for(start,stop,step)
		for(i=0;i<2;i++){
			for(m=0;m<2;m++){
				for(n=0;n<3;n++){
					printf("%d\t",marks[i][m][n]);
				}
				printf("\n");
			}
		printf("\n");
		}
	return 0;
}
