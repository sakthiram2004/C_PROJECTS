#include<stdio.h>
#include<math.h>
main()
{
	int n,f,i;
	printf("enter n");
	scanf("%d",&n);
	if(n==2)
	printf("2 is prime");
	else if (n%2==0 || n==1)
	printf("%d is not prime",n);
	else
	{
		f=1;
		for(i=3;i<=sqrt(n);i+=2)
		
			if(n%i==0)
			{
				f=0;
				break;
			}
			if(f==1)
			printf("%d is prime",n);
			else
			printf("%d is not prime",n);		
		
		
	}
	
}
