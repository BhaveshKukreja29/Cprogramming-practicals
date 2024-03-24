#include <stdio.h>

int main()
{       int a[100];
	int i,n;
	int k = 0;
	clrscr();

	printf("Enter the size of array: ");
	scanf("%d", &n);

	for(i=0;i<=n-1;i++)
	{
		printf("Enter the %dth element: ", i+1);
		scanf("%d", &a[i]);
	}

	clrscr();

	for(i=0;i<=n-1;i++)
	{
		if(a[i]>k)
		{
			k = a[i];
		}
	}

	printf("The largest value is %d", k);




	getch();
	return 0;
}