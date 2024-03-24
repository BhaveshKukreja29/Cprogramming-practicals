#include<stdio.h>

void main(){
	int n;
	int i=0;
	clrscr();
	printf("Enter the range: ");
	scanf(" %d", n);

	while(i<=n){
		int sum = 0;
		int remain = 0;
		int arm = i;
		while(arm!=0){
			remain = arm%10;
			sum = sum + remain*remain*remain;
			arm = arm/10;
		}
	if (i==sum){printf("%d ",i);}
	i++;
	}
	getch();
}