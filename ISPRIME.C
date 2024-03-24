#include <stdio.h>

void main(){
	int n;
	int prime = 1;
	int i;
	clrscr();
	printf("E1 Roll no.14 Bhavesh Kukreja.\n");

	printf("Enter the number to check: ");
	scanf("%d", &n);

	for(i=2;i<=n/2;i++)
	{

		if(n%i==0)
		{
			prime = 0;
			break;
		}
	}

	if(prime == 1) printf("Is prime.");
	else printf("Is not prime.");
	getch();

}