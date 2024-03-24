#include <stdio.h>

void main(){
	int n;
	int i;
	long fact=0;

	clrscr();

	printf("Enter the number: ");
	scanf(" %d", &n);

	for(i=1;i<=n;i++){
		fact = fact+i*i;
	}
	printf("The sum is %ld", fact);

	getch();
}