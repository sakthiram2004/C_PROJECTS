#include<stdio.h>
main()
{
	char a[50];
	int n,i;
	printf("enter n:");
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
		printf("%c \n",a[i]);
		i++;
	}
}
