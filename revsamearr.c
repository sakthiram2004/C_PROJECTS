#include<stdio.h>
main()
{
	char a[50],c;
	int i,j;
	printf ("enter a str:");
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	i++;
	i=i-1;
	for(j=0;j<i/2;j++)
	{
		c    = a[i];
		a[i] = a[j];
		a[j] = c;
		i--;
		
	}
	printf("%s",a);
}
