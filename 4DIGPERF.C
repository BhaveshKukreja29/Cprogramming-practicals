#include <stdio.h>

int main()
{
	int n;
	int j;
	int i;
	int perf = 0;

	clrscr();
	printf("Enter a 4 digit number: ");
	scanf("%d", &n);


	for(i=1;i<=n/2;i++)
	{
		if(i*i==n)
		{
			perf = 1;
		}
	}

	if(perf == 1)  printf("is perfect square");
	else printf("is not perfect square");

	getch();
	return 0;
}