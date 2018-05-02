#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#define MAXBAL 100
main ()
{

int loopcounter;
int idsearch;
int found = 0;
int counter;


int custid[10] = {313,453,502,101,892,475,792,912,343,633};
float custbal[10] = {0.00,45.43,71.23,301.56,9.08,192.41,389.00,229.67,18.31,59.54};

int tempid, inner, outer, didswap;
float tempbalance;

for (outer=0; outer<10; outer++)
	{
		didswap = 0;
		for(inner=outer; inner<10;inner++)	
		{
			if(custid[inner] < custid[outer])
			{
				tempid = custid[inner];
				tempbalance = custbal[inner];
				custid[inner] = custid[outer];
				custbal[inner] = custbal[outer];
				custid[outer] = tempid;
				custbal[outer] = tempbalance ;
				didswap = 1;
			}
				
		}
		if(didswap==0)
			{
				break;
			}
	printf("This is to check Custmer Balance of a Customer\n");
printf("please enter Customer ID:");
scanf(" %d", &idsearch);

for(counter=0; counter<10; counter++)
	{
		printf(" The array number is %d \n ", counter);
		if(idsearch == custid[counter])
			{
			found = 1;	
			break;
			}
		
	}
		
if(found)
	{
				if(custbal[counter] > MAXBAL)
			{
				printf(" Your balance is already %f so no more credit:\n", custbal[counter]);
				printf("\nsorry for inconvinence");
			}
		else
			{
			printf(" The matching array number is %d", counter);
				printf(" Your balance  %.2f is less than %d so you have good credit", custbal[counter], MAXBAL);
			}
	}
	
else
	{
		printf("The customer ID you entered does not exist\n");
		printf("\nPlease choose from one of the following:");
		for (counter=0;counter<10;counter++)
			{
				printf(" %d", custid[counter]);
			}
	}
return 0;
}
}

