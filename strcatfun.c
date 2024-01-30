#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20],c[60];
	printf("enter a  and b string:");
	scanf("%s %s",a,b);
	strcpy(c,a);
	strcat(c,b);
	printf("%s",c);
	
}
