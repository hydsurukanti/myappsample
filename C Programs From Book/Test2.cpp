#include <iostream>
#include <stdio.h>
#include <cstdio>
#define AGELIMIT 21
main ()
{
	int age;
	char first [10], last[10];
	printf(" Please enter your First name:");
	scanf(" %s", first);
	printf(" Please enter your last name:");
	scanf(" %s", last);
	printf("\n Name entered is: %s %s", first, last);
	printf(" Please enter your Age:");
	scanf(" %d", &age);
	if(age<AGELIMIT)
	{ 
		printf(" you are too young to drink");
	}
	else
	{
		printf(" Happy Drinking MR.%s %s", first,last);
	}
/*	do
	{
	printf( "Count %d \n ",count);
	count=count+2;
	}
	while(count<=20);
	return 0; */
}


