#include<stdio.h>
#include<string.h>
main()
{
	char a[50],b[50];
	printf("enter a string :");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	printf("%s",b);
	
}
