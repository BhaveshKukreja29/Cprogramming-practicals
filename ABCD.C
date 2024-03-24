#include <stdio.h>

void main(){
	int n;
	int i;
	int j;
	int k;
	clrscr();
	printf("Enter the number: ");
	scanf(" %d", &n);

	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}

		for(j=1;j<=i;j++){
			printf(" %d", j);
		}
		k=65;
		for(j=1;j<i;j++){
			printf(" %c", k);
			k++;
		}
		printf(" \n");
	}

	getch();
}