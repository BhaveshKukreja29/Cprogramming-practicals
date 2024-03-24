#include <stdio.h>

int main(){
	int n;
	int i;
	int multip;

	clrscr();
	printf("Enter a number: ");
	scanf(" %d", &n);
	for(i=0;i<n;i++){
		multip = i*i;

		if(multip == n){
			printf("Is perfect square");
			break;
		}

	}
	if(multip != n){printf("Not a perfect square");}
	getch();
	return 0;
}