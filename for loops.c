/*
Author: Keziah Mytheu Mutiso
Reg no :D33-5020-2023
program to illustrate for loops
Date :10/3/2025
*/
#include <stdio.h>

int main(){
	int i=1;
	//for(start ,stop, step)
	for (i=1 ; i<=100 ; i=i+1){
		printf("number is :%d, and cube of the %d is: %d\n" ,i,i,(i*i*i) );
	}
	return 0;
}