#include <stdio.h>

void main(){
	int n;
	int i;
	int k;

	clrscr();

	printf("Enter the number: ");
	scanf(" %d", &n);

	for(i=1;i<=n/2;i++){
		k=n;
		if(k%i==0){printf(" %d ",i);}
	}

	getch();
}