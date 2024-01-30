#include<stdio.h>
main()
{
	char a[50];
	int i,n,f,j,c;
	printf("enter a string :");
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	i++;
	n=i;
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<=i;j++)
		
			if(a[i]==a[j])
			{
				f=1;
				break;
			}
			if(f==0)
			{
				c=0;
				for(j=i;j<n;j++)
				if(a[i]==a[j])
				c++;
				printf("%c -> %d \n",a[i],c);
				
			}
			
	}
}
