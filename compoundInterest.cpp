/*
Author:Keziah Mutheu Mutiso
Reg no:D33-5020-2023
program to find compound interest
Date:21/2/2025
*/
#include <stdio.h> 
#include <math.h>//for pow function
	void calculate_compoundInterest(float principal,float time,float rate,int n){
		float amount=principal*pow((1+rate/(100*n)),n * time);
		float compoundInterest=amount - principal;
		printf("compoundInterest:%2f\n",compoundInterest);
	}
	int main(){
		float principal,time,rate;
		int n;
	printf("Enter the principal amount:");
	scanf("%f",&principal);
	printf("Enter time (in years):");
	scanf("%f",&time);
	printf("Enter the rate of interest:");
	scanf("%f",&rate);
	printf("Enter the number of times compounded in a year:");
	scanf("%d",&n);
	//calculate and display results;
	calculate_compoundInterest(principal,time,rate,n);
	return 0;	
	}
