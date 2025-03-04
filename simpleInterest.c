/*
program to find simple interest
Author:Keziah Mutheu Mutiso
Reg no :D33-5020-2023
Date:
*/
#include <stdio.h>
int main(){
	int principal;
	int time;
	int rate;
	
	int simpleinterest;
	printf("Enter the principal :");
	scanf("%d",&principal);
	printf("Enter the time:");
	scanf("%d",&time);
	printf("Enter the rate:");
	scanf("%d",&rate);
	printf("Program to divide by 100:");
	simpleinterest=(principal*time*rate)/100;
	printf("The simpleinterest is %d",simpleinterest);
	return 0;
	
	
	
}