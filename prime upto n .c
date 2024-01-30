#include<stdio.h>
#include<math.h>
main()
{
	int n,i,j,f;
	printf("enter n:");
	scanf("%d",&n);
	if(n>=2)
	printf("2 \n");
	else
	{
		for(i=3;i<=n;i++)
		{
			f=1;
			for(j=3;j<=sqrt(n);j++)
			 if(i%j==0)
			 {
			 	f=0;
			 	break;
			 }
			 printf("%d\n",i);
			
		}
	}
}
