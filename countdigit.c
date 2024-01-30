#include<stdio.h>
main()
{
	int n,c;
	printf("enter n:");
	scanf("%d",&n);
	c=0;
	while(n!=0)
	{
		c++;
		n=n/10;
	}
	printf("%d",c);
}
