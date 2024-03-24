#include <stdio.h>


int main(){
	int choice;
	float x = 0;
	float ans;
	float y = 0;
	clrscr();
	printf("Enter 1 for area of circle.\n");
	printf("Enter 2 for area of rectangle.\n");
	printf("Enter 3 for area of triangle.\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice){
		case 1:
			printf("Enter the radius of circle: ");
			scanf("%f", &x);

			printf("The area of circle is: %.2f", 3.14*(x*x));
			break;

		case 2:
			printf("Enter the length of rectangle: ");
			scanf("%f", &x);

			printf("Enter the width of rectangle: ");
			scanf("%f", &y);

			printf("The area of rectangle is: %.2f", x*y);
			break;
		case 3:
			printf("Enter the base of triangle: ");
			scanf("%f", &x);

			printf("Enter the height of triangle: ");
			scanf("%f", &y);

			ans = 0.5*x*y;

			printf("The area of the triangle is: %.2f units.", ans);
			break;
		default:
			printf("Invalid Input.");
		}

	getch();
	return 0;
}