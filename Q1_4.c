#include<stdio.h>
int main()
{
	char name[30];
	int year;
	printf("What is your name? ");
	scanf("%s",&name);
	printf("How old are you? \n");
	scanf("%d",&year);
	printf("========================================\n");
	printf("Welcome %s . You have %d years old.",name,year);
	return 0;
}
