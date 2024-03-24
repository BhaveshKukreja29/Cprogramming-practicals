#include <stdio.h>

int main()
{       int a[100];
	int i,n,k;
	int find = 0;
	clrscr();

	printf("Enter the size of array: ");
	scanf("%d", &n);

	for(i=0;i<=n-1;i++)
	{
		printf("Enter the %dth element: ", i+1);
		scanf("%d", &a[i]);
	}

	clrscr();

	printf("Enter the value you want to find: ");
	scanf("%d", &k);

	for(i=0;i<=n-1;i++)
	{
		if(a[i]==k)
		{
			find = 1;
			break;
		}
	}

	if(find == 1) printf("The number is present at %dth position", i+1);

	else printf("The number is not present in this array.");



	getch();
	return 0;
}