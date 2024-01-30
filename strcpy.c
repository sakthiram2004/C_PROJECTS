#include<stdio.h>
main()
{
	char a[50],b[50];
	int i;
	printf("enter a str:");
	scanf("%s",a);
	i=0;
	while(a[i]!=0)
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	printf("%s",b);
}
