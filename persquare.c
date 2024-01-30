#include<stdio.h>
main()
{
	int n,k,i,p,f;
	printf("enter n:");
	scanf("%d",&n);
	k=1;f=0;
	for(i=1;i<n;i++)
	{
		p=k*i;
		k++;
		if(p==n)
		{
			f=1;
			break;
		}
	
	}
	if(f==1)
		printf("%d is perfect square",n);
		else
		printf("%d is not perfect square",n);
}
