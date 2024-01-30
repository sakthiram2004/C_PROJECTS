#include<stdio.h>
main()
{
	int n,s,i;
	printf("enter n:");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	{
		s=s+i;
		printf("%d  %d \n",i,s);
	}

}
