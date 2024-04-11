#include <stdio.h>
#include <conio.h>

struct Bacha
{
		char name[100];
		int roll;
		float math,chem,phy;
}s;


int main()
{
	clrscr();

	printf("Enter the student name: ");
	scanf("%s", s.name);

	printf("Enter the roll no.: ");
	scanf("%d", &s.roll);

	printf("Enter the math marks: ");
	scanf("%f", &s.math);

	printf("Enter the chemistry marks: ");
	scanf("%f", &s.chem);

	printf("Enter the physics marks: ");
	scanf("%f", &s.phy);

	clrscr();

	printf(" Name \t Roll no. \t PCM score \n\n");

	printf(" %s \t %d \t\t %.1f", s.name, s.roll, s.chem + s.phy + s.math);

	getch();
	return 0;
}
