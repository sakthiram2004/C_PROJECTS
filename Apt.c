#include<stdio.h>
int main()
{
	int r,n,m,f,s,i;
	printf("Enter N:\n");
	scanf("%d",&n);
	m=n;
	s=0;
	while(n!=0)
	{
		r=n%10;
		f=1;
		for(i=1;i<=r;i++)
		f=f*i;
		s=s+f;
		n=n/10;
	}
	if(m==s)
	printf("%d is Apt\n",m);
	else
	printf("%d is Not a Apt\n",m);
	return 0;
}
