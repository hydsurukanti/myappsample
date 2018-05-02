#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string.h>
#define AGELIMIT 21
main ()
{
	
int i;
char message[] = "I love C";
for(i=0; i<strlen(message); i++)
	{
	putchar(message[i]);
	printf("\n Loop: %d", i);
	}
putchar('\n');
return 0;
} 
