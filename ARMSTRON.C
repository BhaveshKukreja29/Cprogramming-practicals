#include<stdio.h>

void main(){
	int n=0;
	int remain;
	int sum;
	int arm;
	clrscr();
	printf("Enter the number to check: ");
	scanf(" %d", &n);

	remain=0;
	sum=0;
	arm = n;
	while(arm!=0){
		remain = arm%10;
		sum = sum + remain*remain*remain;
		arm = arm/10;
	}
	if(n==sum){printf("is armstrong");}
	else{printf("is not");}
	getch();
}