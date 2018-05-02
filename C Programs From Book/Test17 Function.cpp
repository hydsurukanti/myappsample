/* This program is to learn how to pass on a value to a function*/
#include <stdio.h>
#include <stdlib.h>

test(int i)

{
	i = i / 2;
	printf("Your new value after calculating with your formula is %d \n",i);
	return 0;	
}	


main()
{
	
	int i;
	printf("Please enter a number");
	scanf(" %d", &i);
	test(i);
	printf(" The value of i: %d", i);
	return 0;
}
	




