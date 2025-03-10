/*
Author: Keziah Mutheu Mutiso
Reg no :D33-5020-2023
while loops
Date:10/3/2025
*/
#include <stdio.h>
int main (){
	int i=1;//start
	while(i<=100){ // stop
		//print the current  value of i and the cube of i
		printf("Number is :%d and cube of %d is:%d\n" ,i,i,(i*i*i));
		i++;//step
	}
	return 0;
}