#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

main ()
{

int counter, outer, inner, didswap, temp;
int nums[10];

for(counter=0; counter<10; counter++)
	{
		nums[counter]= (rand() % 99) + 1;
	}
puts(" \n Here is the list of number befor the sort \n");

	for(counter=0; counter<10; counter++)
	{
		printf("\n %d ", nums[counter]);
	}

for(outer=0; outer<9; outer++)
	{
		didswap=0;
		for(inner=outer;inner<10;inner++)
			{
				if(nums[inner]<nums[outer])
					{
						temp = nums[inner];
						nums[inner]= nums[outer];
						nums[outer]= temp;
						didswap = 1;
						printf("\n outer:%d Inner:%d Temp:%d ", outer, inner, temp);
						for(counter=0; counter<10; counter++)
								{
									printf("\n %d ", nums[counter]);
								}			
					}
			}
if (didswap==0)
	{
		break;
	}
	
	}
printf("\n Here is the list after the sort:\n");
for(counter=0; counter<10; counter++)
	{
		printf("\n %d ", nums[counter]);
	}
return 0;
}
