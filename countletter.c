#include<stdio.h>
main()
{
	char a[20],b[20];
	int c,i,j;
	printf("enter 2 strings:");
	scanf("%s %s",a,b);
	c=0;i=0;j=0;
	while(a[i]!='\0'&& b[j]!='\0')
	{
	 if(a[i]==a[j])
	  c++;
	i++;
	j++;
	}
	printf("%d\n",c);
	
}
