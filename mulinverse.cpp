#include<stdio.h>
#include<iostream>
#include<stdlib.h>
main()
{
	int x,y,i;
	printf("\t\t* MULTIPLICATIVE INVERSE *\n\n");
	printf("Enter the (x) and (y) respectively  in '(x (mod y))' ");
	scanf("%d%d",&x,&y);
	
	for(i=x;;i++)
	{
		if((x*i)%y==1)
		{
			printf("The Multiplicative Inverse of %d (mod %d) = %d (mod %d)",x,y,i,y);
			break;
		}
	}
	return 0;
}
