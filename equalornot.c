#include<stdio.h>
main()
{
	int n,s,m,sum,r;
	printf("enter n:");
	scanf("%d",&n);
	s=0;m=n;sum=0;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	sum=s+s+s;
	if(sum==m)
	printf("%d is equal",m);
	else
	printf("%d is not equal",m);
	
	
}
