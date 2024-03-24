#include <stdio.h>
#include <conio.h>

int main()
{
	int choice;
	float pi = 3.14;
	float a,b,c,answer;
	float cons;
	clrscr();

	while(choice!=5)
	{
		a=0;
		b=0;
		c=0;
		printf("E1 Roll no. 14 Bhavesh Kukreja. \n");

		printf("Enter 1 for volume of cube.\n");
		printf("Enter 2 for volume of cone.\n");
		printf("Enter 3 for volume of sphere.\n");
		printf("Enter 4 for volume of cylinder.\n");
		printf("Enter 5 to exit.\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter the length, breadth and height of your cube: \n");
				scanf("%f %f %f",&a,&b,&c);

				printf("The answer is %f cubic units\n", a*b*c);
				break;

			case 2:
				printf("Enter the base radius and height of the cone: \n");
				scanf("%f %f",&a,&b);
				cons = 1.0/3.0;
				printf("The volume of cone is %f units\n", (cons)*a*a*b*pi);
				break;

			case 3:
				printf("Enter the radius of sphere: \n");
				scanf("%f",&a);
				cons = 4.0/3.0;
				printf("The volume of sphere is %f\n", (cons)*a*a*a*pi);
				break;
			case 4:
				printf("Enter the base radius and height of cylinder.");
				scanf("%f %f",&a,&b);

				printf("The volume of cylinder is %f\n",pi*a*a*b);
			case 5:
				break;
			default:
				printf("Error.\n");
			}

	}
	printf("Bye :)");
	getch();
	return 0;
}
