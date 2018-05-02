#include <iostream>
#include <stdio.h>
#include <cstdio>
#define AGELIMIT 21
main ()

{
	int i;
	for (i=1; i<10;i++)
	{
	printf("\n Testing number %d", i);
	if((i % 3 ==0) && (i % 4==0))
	{
		printf("\n number is divisible but 3 & 4 and the number is %d ", i);
		continue;
	}
	
	if(i % 3 ==0)
	{
		printf("\n number is divisible only by 3 and the number is %d ", i);
		continue;
	}
	
	if(i % 4 ==0)
	{
		printf("\n number is divisible only by 4 and the number is %d ", i);
		continue;
	}
	}
	printf("\n This number is not divisible %d", i);
/*	return 0;*/
}


