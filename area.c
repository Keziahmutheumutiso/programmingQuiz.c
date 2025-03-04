/*
Author:Keziah Mutiso
Reg no:D33-5020-2023
program to find area
Date:21/2/2025
*/
#include <stdio.h>//printf(),scanf()
int main(){
	int length;
	int width;
	int area;
	printf("program to find area:\n");
	printf("Enter the length:\n");
	scanf("%d",& length);
	printf("Enter the width:\n");
	scanf("%d",&width);
	area=length*width;
	printf("The area is%d",area);
	return 0;

}