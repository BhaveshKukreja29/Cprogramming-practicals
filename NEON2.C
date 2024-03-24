#include<stdio.h>

void main(){
	int n=0;
	int i;
	clrscr();
	printf("Enter num: ");
	scanf("%d",&n);
	printf("You entered %d\n", n);

	for(i=0;i<=n;i++){
	       int sqr = i*i;
	       int sum = 0;
	       int remain = 0;
		while(sqr != 0){
			remain = sqr%10;
			sqr = sqr/10;
			sum = sum + remain;

		}
	if(i == sum){printf("%d ",i);}
	}
	getch();
}