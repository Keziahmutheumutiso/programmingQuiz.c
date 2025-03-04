/*
Author:Keziah Mutheu Mutiso
Reg no:D33-5020-2023
finding  fine amount
Date:27/2/2025
*/
#include <stdio.h>
int main (){
	int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
	printf("Enter the bookID:");
	scanf("%d",& bookID);
	printf("Enter the dueDate:");
	scanf("%d",& dueDate);
	printf("Enter the returnDate:");
	scanf("%d", & returnDate);
	// calculate days overdue
	daysOverdue=returnDate - dueDate;
	
	//determine fine rate
	if(daysOverdue<=7){
		fineRate=20;
	}
	else if(daysOverdue<=14){
	fineRate=50;	
	}
	else{
		fineRate=100;	
	}
	// calculate fine amount
	fineAmount=daysOverdue* fineRate;
	//Display results
	printf("Book ID:%d\n",bookID);
	printf("Due Date:%d\n",dueDate);
	printf("Return Date:%d\n",returnDate);
	printf("Days Overdue:%d\n",daysOverdue);
	printf("Fine Rate:%d\n",fineRate);
	printf("Fine Amount:%d\n",fineAmount);
	
	return 0;	
}