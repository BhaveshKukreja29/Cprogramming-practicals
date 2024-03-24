#include <stdio.h>
#include <conio.h>

int factorial(int a)
{
	int i;
	int fact = 1;
	if(a==0){
		return 1;}
	else{
		for(i=a;i>0;i--){
			fact = fact*i;
		}
		return fact;
	}
}

int permutation(int n, int r){
	int z;
	z= factorial(n)/(factorial(n-r)*factorial(r));
	return z;
}

int main()
{       int a;
	int b;
	int ans;
	clrscr();
	printf("Welcome to NPR calculator!!!\n\n");

	printf("For NPR enter the value of N: ");
	scanf(" %d", &a);

	printf("For NPR enter the value of R: ");
	scanf(" %d", &b);
	printf("\n\n");

	ans = permutation(a,b);
	printf("The answer is %d", ans);

	getch();
	return 0;

}