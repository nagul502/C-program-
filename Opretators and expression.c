#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("=====OPERATION AND EXPRESSION=====\n");
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n-----MENU-----\n");
	printf("1.Addition\n");
	printf("2.Subraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulas\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a+b;
			printf("Result= %d",res);
			break;
		case 2:
			res=a-b;
			printf("Result= %d",res);
			break;
		case 3:
			res=a*b;
			printf("Result= %d",res);
			break;
		case 4:
			res=a/b;
			printf("Result= %d",res);
			break;
		case 5:
			res=a%b;
			printf("Result= %d",res);
			break;
	}
	return 0;
}
