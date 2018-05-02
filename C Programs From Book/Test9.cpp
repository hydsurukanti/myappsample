#include <iostream>
#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <string.h>
#define AGELIMIT 21
main ()
{

char name[25], newname[25];
char ans;
int i;
printf("\n please enter your name:");
gets(name);

printf("Are your sure your Name is: %s", name);
ans = getch();
if (toupper(ans) == 'Y')
{
	for(i=0; i <= strlen(name);i++)
	{
		newname[i]=toupper(name[i]);
	}
	printf("your name us uppercase letters us %s", newname);
}
return 0;
}
