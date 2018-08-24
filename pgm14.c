#include<stdio.h>

int main()
{
enum color{red, orange, yellow, green, blue, indigo, violet};
int  ch;
printf("Enter number from 0 to 6");
scanf("%d",&ch);
switch(ch)
{

	case red:
		printf("red");
		break;
	case orange:
		printf("orange");
		break;
	case yellow:
		printf("yellow");
		break;
	case green:
		printf("green");
		break;
	case blue:
		printf("blue");
		break;
	case indigo:
		printf("indigo");
		break;
	case violet:
		printf("violet");
		break;


}

return 0;
}
