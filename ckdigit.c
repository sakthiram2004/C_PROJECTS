#include<stdio.h>
main()
{
	char a[50];
	int i;
	printf("enter a str:");
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	printf("%d\n",i);
}
