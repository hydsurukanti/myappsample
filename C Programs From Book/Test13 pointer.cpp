#include <iostream>
#include <cstdio>
#include <stdio.h>
main ()
{
int daynum,i;
char *days[7] = {"sun","mon","tue","wed","thu","fri","sat"};
/*days[0] = "sun";
days[1] = "mon";
days[2] = "tue";
days[3] = "wed";
days[4] = "thu";
days[5] = "fri";
days[6] = "sat";*/

printf(" Please enter Values 0 to 6:");
scanf(" %d", &daynum);

for (i=0; i<=daynum; i++)
printf(" The array is: %s address: %p \n", days[i],(void *)(&days[i]));

/*printf("days[%u] = %p\n", i, (void *)(&days[i]));*/

if(daynum>=0 && daynum<=6)
	{
		printf("\nThat day is %s\n", days[daynum]);
	}
else
	{
		printf("Enter number b/w 1 & 7.\n");
	}	
}


