/*
	Comments
*/
#include <cstdio>
	#include <stdio.h>
main ()
{
	int i, temp[5], temp2[5];
	int array1[5]= {10,15,20,25,30};
	int array2[5]= {35,45,55,65,75};
	printf(" %d  %d %d %d %d\n ", array1, array1[0], *(array1+1), &array1, &array1[0]);
	int *p1;
	int *p2;
	
	printf(" \n \n %d  %d \n ", p1,p2);
	
	for(i=0; i<=4; i++)
	{
	p1 = &array1[i];
	p2 = &array2[i];
	printf(" \n Array Address: %d Value at Adress: %d ", p1, *(p1));
	printf(" \n Array Address: %d Value at Adress: %d ", p2, *p2);
	
	temp[i] = *p1+ *p2;
	printf(" \n Array Address: %d Sum: %d ",  &temp[i], temp[i]);

}
}


