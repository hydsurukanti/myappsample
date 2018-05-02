#include <iostream>
#include <stdio.h>
#include <cstdio>
#define AGELIMIT 21
main ()

{
	char first [100], last[100] ;
	int i, j;
	
	printf(" Please enter your First name:");
	scanf(" %s", first);
	printf(" Please enter your last name:");
	scanf(" %s", last);
	printf("\n Name entered is: %s %s", first, last);
	
	for (i=0; first[i]!= '\0'; ++i)
	printf(" \n First name string lengeth: %d", i);
return 0;
}
/*
#include <stdio.h>
int main()
{
    char s[1000], i;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; ++i);

    printf("Length of string: %d", i);
    return 0;
*/


