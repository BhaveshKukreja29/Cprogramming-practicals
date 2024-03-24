#include <stdio.h>

int main(){
	int n,m,i,k;

	clrscr();

	printf("Enter the first number: ");
	scanf(" %d", &n);

	printf("Enter the second number: ");
	scanf(" %d", &m);

	if(n>m){
		k=n;
	}
	else{
		k=m;
	}

	for(i=k;i!=0;i--){
		if(n%i==0){
			if(m%i==0)
			{
				printf("The GCD is %d", i);
				break;
			}
		}
	}

	getch();
	return 0;
}