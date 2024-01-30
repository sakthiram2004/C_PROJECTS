#include<stdio.h>
main()
{
	char a[20],b[20],c[50];
	int i,j;
	printf("enter a and b string:");
	scanf("%s %s",a,b);
	i=0;j=0;
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
		
	}
	while(b[j]!='\0')
	{
		c[i]=b[j];
		j++;
		i++;
		
	}
	c[i]='\0';
	printf("%s",c);
	
}
