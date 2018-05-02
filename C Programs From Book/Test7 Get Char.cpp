#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string.h>
#define AGELIMIT 21
main ()
{
	
int i;
char message[10];

for(i=0; i<10 ; i++)
	{
	message[i]=getchar();
	if (message[i] =='\n')
	
		{
			i--;
			break;
		}
	putchar('\n');
	}
for(; i>=0; i--)
{
	putchar(message[i]);
}
putchar('\n');
return 0;
} 
