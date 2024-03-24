#include <stdio.h>

void main(){
	int n;
	int sum = 0;
	int i;
	clrscr();

	printf("Enter the upperlimit: ");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("The answer is %d", sum);


	getch();

}