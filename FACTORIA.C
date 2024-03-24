#include <stdio.h>

void main(){
	int n;
	int i;
	long fact=1;

	clrscr();

	printf("Enter the number: ");
	scanf(" %d", &n);

	for(i=n;i>0;i--){
		fact = fact*i;
	}
	printf("The factorial is %ld", fact);

	getch();
}