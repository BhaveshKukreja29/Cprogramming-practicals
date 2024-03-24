#include <stdio.h>

int main(){
	int n1, n2,n3;
	clrscr();
	printf("Enter the first number: ");
	scanf(" %d", &n1);

	printf("Enter the second number: ");
	scanf(" %d", &n2);

	printf("Enter the third number: ");
	scanf(" %d", &n3);

	if(n1>n2){
		if(n1>n3){
		     printf(" %d", n1);
		}
		if(n1<n3){
			printf(" %d", n3);
		}
	}
	if(n2>n1){
		if(n2>n3){
			printf(" %d", n2);
		}
		else printf(" %d", n3);
	}
	getch();
	return 0;

}