#include<stdio.h>
int main()
{
	int n,m,min;
	float r;
	printf("Enter the number of Pigeons to be accomadated  or enter  n: ");
	scanf("%d", &n);
	printf("Enter the number of Pigeonholes  or  enter m: ");
	scanf("%d", &m);
	r=((n-1)%m);
	r=r/m;
	if (r<0.5)
	{
		min=((n-1)/m)+1;
	}
	if (r>0.5)
	{
		min=((n-1)/m)+2;
	}
	printf("The minimum number of Pigeons in a Pigeonhole is: %d", min);
	return 0;
}
