#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
struct inventoryStructure
{
	char manuf[25];
	char model[15];
	int diskspace;
	int ram;
	int quantity;
	float cost;
	float price;
};

main ()
{

int counter;
struct inventoryStructure *item[3];

for(counter=0; counter<3; counter++)
	{
		item[counter]=(struct inventoryStructure*)malloc(sizeof(struct inventoryStructure));
		printf("What is the manufacture of item # %d ?: ", (counter+1));
		gets(item[counter]->manuf);
		printf("What is the model of item # %d ?: ", (counter+1));
		gets(item[counter]->model);
		printf("How many megabits of DiskSpace %d ?: ", (counter+1));
		scanf(" %d", &item[counter]->diskspace);
		printf("How much Ram %d ?: ", (counter+1));
		scanf(" %d", &item[counter]->ram);
		printf("How many are there %d ?: ", (counter+1));
		scanf(" %d", &item[counter]->quantity);
		printf("What is the Cost of Each %d ?: ", (counter+1));
		scanf(" %f", &item[counter]->cost);
		printf("How much does this retail %d ?: ", (counter+1));
		scanf(" %f", &item[counter]->price); 
		getchar();
	}

printf(" Here is the inventory: \n");
printf(" \n *******************************\n");
for(counter=0; counter<3; counter++)
	{
		printf("Manufacture of item # %d With Memlocation %d : %s \n", (counter + 1), &item[counter]->manuf, item[counter]->manuf);
		printf("Model With Memlocation %d : %s \n", &item[counter]->model, item[counter]->model);
		printf("Diskspace With Memlocation %d : %d \n", &item[counter]->diskspace, item[counter]->diskspace);	
		printf("Ram With Memlocation %d : %d \n", &item[counter]->ram, item[counter]->ram);
		printf("Quantity With Memlocation %d : %d \n", &item[counter]->quantity, item[counter]->quantity);
		printf("Cost With Memlocation %d : %f \n", & item[counter]->cost, item[counter]->cost);
		printf("Selling Price With Memlocation %d : %f \n", &item[counter]->price, item[counter]->price); 
		printf(" \n *******************************\n");
	}

}


