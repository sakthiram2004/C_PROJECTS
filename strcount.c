#include<stdio.h>
#include<string.h>
main()
{
	char a[50],b[50];
	int n,k,i,j,c;
	printf("enter 2 strings:");
	scanf("%s %s",a,b);
	n=strlen(a);
	k=strlen(b);
	c=0;
	for(i=0;i<=n;i++)
	{
	   for (j=i;j<k;j++)
		if(a[i]==a[j])
		c++;
		
	}
	printf("count=%d\n",c);
}
