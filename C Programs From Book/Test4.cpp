#include <iostream>
#include <stdio.h>
#include <cstdio>
#define AGELIMIT 21
main ()

{
	int studentcount;
	float studentmarks, average, total;
	
	for(studentcount=1; studentcount<10; studentcount++)
	{
		printf("\n Enter next Students test score:");
		scanf(" %f", &studentmarks);
			if (studentmarks<=0)
			{
				
				break;
			}
	printf("\n Entered Student Score:%f", studentmarks);
	total += studentmarks;
	printf("\n total is %f", total);
	}
average = total / studentcount;
printf("\n The average is: %f", average);	
return 0;	
}


