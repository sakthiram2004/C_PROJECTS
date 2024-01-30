#include<stdio.h>
main()
{
	char a[50];
	int i;
	printf("enter n");
	scanf("%d",a);
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	printf("%d\n",i);
}
