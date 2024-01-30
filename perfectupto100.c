#include<stdio.h>
main()
{
	int i,j,s;
	for(i=1;i<=100;i++)
	{ s=0;
		for(j=1;j<=i/2;j++)
		if(i%j==0)
		s=s+j;
		if(s==i)
		printf("%d\n",i);
		
	}
	
	
}
