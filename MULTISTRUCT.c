#include <stdio.h>
#include <conio.h>

struct Bacha
{
		char name[10];
		int roll;
		float math;
		float phy;
		float chem;
}s[3], temp;


int main()
{
	float total;
	int i;

	clrscr();

	for (i = 0; i < 3 ; i++)
	{
		printf("\nEnter the data for student 1\n", i+1);
		printf("Enter the student name: ");
		scanf("%s", s[i].name);

		printf("Enter the roll no.: ");
		scanf("%d", &s[i].roll);

		printf("Enter the math marks: ");
		scanf("%f", &s[i].math);

		printf("Enter the chemistry marks: ");
		scanf("%f", &s[i].chem);

		printf("Enter the physics marks: ");
		scanf("%f", &s[i].phy);
	}

	printf(" Name \t Roll no. \t PCM score \n\n");

	for (i = 0 ; i < 3 ; i++)
	{
		printf("\n");
		printf(" %s \t %d \t\t %.1f", s[i].name, s[i].roll, s[i].chem + s[i].phy + s[i].math);
	}

	getch();
	return 0;
}
