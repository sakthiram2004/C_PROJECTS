#include<stdio.h>
int main()
{
	int n,s,r,m;
	printf("Enter N\n");
	scanf("%d",&n);
	m=n;
	s=0;
	while(n!=0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(m==s)
	printf("%d is Armstrong",m);
	else
	printf("%d is not a Armstrong\n",m);
	return 0;
}
