#include <iostream>
#include <stdio.h>
#include <cstdio>
#define AGELIMIT 21
main ()
{
	
char choice;

printf("Are you filinf for Single (S) Joint (J) or Married (M)?");
scanf(" %c",&choice);
printf("Your selected option is: %c \n", choice);

do

{
	
	switch (choice)
	
		{
			case ('s') : printf("you selected %c so you set $1000\n", choice);
						 break;
			case ('j') : printf("you selected %c so you set $2000\n", choice);
						 break;
			case ('m') : printf("you selected %c so you set $5000\n", choice);
						 break;
			default : 	printf("The %c you enteted is not understood", choice);
					  	printf(" Please try again \n");	
						break;
		}
}

while((choice !='s' && (choice != 'j') && (choice != 'm')));
return 0;
}
