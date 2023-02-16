#include <stdio.h>

// GitHub:  https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-2.2 

main()
{
	int a,b;
	
	printf("Pervoe chislo: ");
	scanf("%i",&a);
	
	printf("Vtoroe chislo: ");
	scanf("%i",&b);
	
	if(a>b)
	{
		printf("A bolshe");
	}
	
	else
	{
		if(a==b)
		{
			printf("Ravny");
		}
		else
		{
			printf("B bolshe");
		}
	}
}